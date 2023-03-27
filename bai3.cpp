#include <iostream>
using namespace std;

int main() {
	cout << "nhap so phan tu mang";
    int n ;
    cin >> n;
	cout << "nhap phan tu mang ";
	float a[n];
	for (int i = 0;i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n; i++) {
		cout  <<  " mang la "<< a[i] ;
	}
    cout << " Kich co cua mang la:  " << sizeof(float)*n << endl;
	return 0;
}