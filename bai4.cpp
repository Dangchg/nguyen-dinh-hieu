#include <iostream>
using namespace std;

int main() {
    cout << "nhap so chieu \n ";
    int n ;
    cin >> n;
    cout << "nhap toa do vecto\n ";
	double a[n];
	for (int i = 0;i < n; i++) {
		cin >> a[i];
	}
    int b;
    cout <<  "nhap so ";
    cin >> b ;
    cout<< "tich la";
    for (int i = 0;i < n; i++) {
		cout  << " \t "<< a[i]*b ;
	}
    }