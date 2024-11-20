#include <iostream>
using namespace std;

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int a = 5;
    int b = 6;

    // Tinh tong, hieu, tich, thuong cua hai bien va luu ket qua vao cac bien khac
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = static_cast<float>(a) / b;  // Su dung float de luu ket qua chia

    // In ket qua ra man hinh voi khoang trang cho de doc
    cout << "Tong cua " << a << " va " << b << " la: " << tong << endl;
    cout << "Hieu cua " << a << " va " << b << " la: " << hieu << endl;
    cout << "Tich cua " << a << " va " << b << " la: " << tich << endl;
    cout << "Thuong cua " << a << " va " << b << " la: " << thuong << endl;

    return 0;
}
