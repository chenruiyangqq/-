#include "head.h"
struct student {
	int id;
	char name[100];
	char number[100];
};
  int main() {
	  float v = 3.00;
	int a = 0xd;
	int b = 0X18; 
	const char* q = "xingqiong";
	cout << "_____\b\b\b";
	short c(327698.99993210);
	cout << c << endl;
	char c4 = c;
	cin >> a;
	a = pow(a,3);
	int sum = fact(a, b);
	fact();
	printf("%s",q);
	cout << endl;
	printf("hello word?       a6\n");
	cout << hex << sum << std::endl;

	cout << dec << sum << " " << sizeof(int);
	cout << "come up and see";
	cout << "\a";
	cout << endl;
	cin >> a;
	cout << "\a";
	
	bool condition = true;
	for (int i = 0;condition; ){

		log("hello world///.45d");
		i++;
		if (i % 2 == 0)
			continue;
		cout << i;
		cout << endl;
		if (!(i < 5))
			condition = false;
	}
	log("========\\=================-----=====");
		int  i = 0;
	while (i < 5) { 
		log("hello world///.45d");
		i++;
	}
	log("------------------------------------");
	bool fact = false;
	do {
		log("hello   4da1111");
	} while (fact);

	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << tub << endl;
	cout << million * tub << endl;
	cout << 10 * million * tub << endl;
	cout << 100 * million * tub << endl;
	cout << 1000 * million * tub << endl;
	float z = 2.34e22;
	float s = z + 1.0;
	cout << s - z;
	cin.get();
	return 0;
}