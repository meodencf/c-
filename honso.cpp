#include<iostream>

using namespace std;
 int songuyen;
 int mauso;
 int tuso;
 void nhaphonso(){
    cout <<"nhap phan nguyen:";
    cin >> songuyen;
    cout << "nhap tu so:";
    cin >> tuso;
    do
	{
		cout <<"nhap mau so:";
		cin >> mauso;
		if(mauso == 0)
		{
			cout <<"mau so khac 0, nhap lai mau so!!";
		}
	}while(mauso==0);
 }
 void XuathonSo(){
	cout <<"hon so la:"<< songuyen<<"+"<< tuso<<"/"<<mauso;
}
int main(){
	nhaphonso();
	XuathonSo();
	cin.get();
	return 0;
}
