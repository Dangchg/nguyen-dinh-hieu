#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
   int i, j, matran1[100][100], matran2[100][100], matran3[100][100];
   int hang1, cot1, hang2, cot2;
 
   cout << "Nhap so hang cua matran1: ";
   cin >> hang1;
   cout << "Nhap so cot cua matran1: ";
   cin >> cot1;
 
   cout << "Nhap so hang cua matran2: ";
   cin >> hang2;
   cout << "Nhap so cot cua matran2: ";
   cin >> cot2;
 
   /*
   kiem tra xem so hang va so cot cua hai ma tran co bang nhau khong 
   */
   if (hang1 != hang2 || cot1 != cot2) {
      cout << "\nHai ma tran khong cung kich co!";
      exit(0);
   }
 
   //Nhap cac phan tu cua ma tran 1
   printf("\nNhap ma tran 1\n");
   for (i = 0; i < hang1; i++) {
      for (j = 0; j < cot1; j++) {
         printf("Nhap phan tu matran1[%d][%d]: ", i+1, j+1);
         cin >> matran1[i][j];
      }
   }
 
   //Nhap cac phan tu cua ma tran 2
   printf("\nNhap ma tran 2\n");
   for (i = 0; i < hang2; i++)
      for (j = 0; j < cot2; j++) {
         printf("Nhap phan tu matran2[%d][%d]: ", i+1, j+1);
         cin >> matran2[i][j];
      }
      cout << "phep tinh can thuc hien cong ,tru hay nhan ";
      string phep ;
      cin >> phep;
      if (phep == "cong ") {
		//Cong hai ma tran
   for (i = 0; i < hang1; i++)
      for (j = 0; j < cot1; j++) {
         matran3[i][j] = matran1[i][j] + matran2[i][j];
      }
	}
    
    else if (phep =="tru") {
		for (i = 0; i < hang1; i++)
      for (j = 0; j < cot1; j++) {
         matran3[i][j] = matran1[i][j] - matran2[i][j];
      }
	}
    
    else {
		for (i = 0; i < hang1; i++)
      for (j = 0; j < cot1; j++) {
         matran3[i][j] = matran1[i][j] * matran2[i][j];
	  }
    }   

 
   
   //Hien thi ma tran ket qua
   printf("\nKet qua cua phep tru hai ma tran la: \n");
   for (i = 0; i < hang1; i++) {
      for (j = 0; j < cot1; j++) {
         printf("%d\t", matran3[i][j]);
      }
      printf("\n");
   }
 
   return 0;
} 