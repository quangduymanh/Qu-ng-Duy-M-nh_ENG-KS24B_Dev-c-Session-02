#include <iostream>
using namespace std;

int main() {
    // Khai bao bien canh
    float canh;
    
    // Gan gia tri cho canh
    cout << "Nhap vao do dai canh cua hinh vuong: ";
    cin >> canh;

    // Tinh chu vi và dien tich
    float chuVi = 4 * canh;
    float dienTich = canh * canh;

    // Hien thi ket qua
    cout << "Chu vi cua hinh vuong la: " << chuVi << endl;
    cout << "Dien tich cua hinh vuong la: " << dienTich << endl;

    return 0;
}
