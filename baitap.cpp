#include <iostream>
#include <string>
using namespace std;

struct THANHPHO {
    int maTP;
    string tenTP;
    float dienTich;
};

int main() {
    THANHPHO tp;
    cout << "Nhap ma thanh pho: ";
    cin >> tp.maTP;
    cout << "Nhap ten thanh pho: ";
    getline(cin, tp.tenTP);
    cout << "Nhap dien tich: ";
    cin >> tp.dienTich;

    cout << endl << "Thong tin thanh pho vua nhap:" << endl;
    cout << "Ma thanh pho: " << tp.maTP << endl;
    cout << "Ten thanh pho: " << tp.tenTP << endl;
    cout << "Dien tich: " << tp.dienTich << endl;

    return 0;
}
