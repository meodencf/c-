#include <iostream>
#include <stdio.h>
using namespace std;
void doivitri(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
  
void sapxep(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                doivitri(arr[j], arr[j+1]);
                haveSwap = true;
            }
        }
        if(haveSwap == false){
            break;
        }
    }
}
void xuat_mang(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i];
        cout<<"\t";
      }
}
 
int main()
{
     int n;
    do{
        cout << "nhap so phan tu mang: ";
        cin >> n;
    }while(n <= 0);
     
    int a[n];
     
    for(int i = 0;i < n;i++){
        cout<<"a["<<i<<"]=";
       cin >> a[i];
    };
    sapxep(a, n);
    cout<<"mang da duoc sap xep: \n";
    xuat_mang(a, n);

}

