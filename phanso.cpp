#include<iostream>
#include<string>
using namespace std;	
int MauSo;
int TuSo;
void NhapPhanSo(){

	cout <<"Nhap vao tu so:";
	cin >> TuSo;
	do
	{
		cout <<"nhap mau so:";
		cin >> MauSo;
		if(MauSo == 0)
		{
			cout <<"mau so khac 0, nhap lai mau so!!";
		}
	} while (MauSo==0);
}
void XuatPhanSo(){
	cout << TuSo<<"/"<<MauSo;
}
int main(){
	NhapPhanSo();
	XuatPhanSo();
	cin.get();
	return 0;
}