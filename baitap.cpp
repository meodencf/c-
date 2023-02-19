#include <iostream>
using namespace std;

struct THANHPHO {
    int maTP;
    char tenTP[31];
    float dienTich;
};
// Ham nhap du lieu cho mot thanh pho
void nhapThanhPho(THANHPHO& tp) {
    cout << "Nhap ma thanh pho: ";
    cin >> tp.maTP;
    cin.ignore(); // bo di ky tu xuong dong sau khi nhap so nguyen
    cout << "Nhap ten thanh pho: ";
    cin.getline(tp.tenTP, 31);
    cout << "Nhap dien tich: ";
    cin >> tp.dienTich;
}
// Ham xuat thong tin cua mot thanh pho
void xuatThanhPho(THANHPHO tp) {
    cout << "Ma thanh pho: " << tp.maTP << endl;
    cout << "Ten thanh pho: " << tp.tenTP << endl;
    cout << "Dien tich: " << tp.dienTich << endl;
}
int main() {
    THANHPHO tp;
    nhapThanhPho(tp);
    xuatThanhPho(tp);
    return 0;
}

