#include <iostream>
using namespace std;

int main() {
	cout << "nhap hang va cot\n ";
    int n,m ;
    cin >> n>>m;
	float a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		cout << "nhap phan tu " << i+1  << j+1 << " " ; 
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
	}
    cout << " Kich co cua mang la: \t " << sizeof(float)*n*m ;
	return 0;
}