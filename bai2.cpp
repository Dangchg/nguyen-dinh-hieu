#include <iostream>
using namespace std;

int main() {
	cout << "so phan tu trong mang";
    int n ;
    cin >> n;
	double a[n];
	cout <<  "nhap phan tu mang";
	for (int i = 0;i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n; i++) {
		cout  <<  "  so dia chi  " << &a << " la :"<< a[i] ;
	}
	return 0;
}