Page({
  data: {
    steps: 0
  },
  onLoad() {
    this.lastMag = 0
    this.threshold = 1.2
    wx.startAccelerometer({ interval: 'game' })
    wx.onAccelerometerChange(this.handleAccel.bind(this))
  },
  handleAccel(res) {
    const mag = Math.sqrt(res.x * res.x + res.y * res.y + res.z * res.z)
    if (this.lastMag !== 0 && Math.abs(mag - this.lastMag) > this.threshold) {
      this.setData({ steps: this.data.steps + 1 })
    }
    this.lastMag = mag
  },
  onUnload() {
    wx.stopAccelerometer()
  }
})
