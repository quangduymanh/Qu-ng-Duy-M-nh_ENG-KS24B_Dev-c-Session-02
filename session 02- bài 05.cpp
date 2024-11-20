#include <iostream>
using namespace std;

int main() {
    // Khai bao cac bien chieu dai, chieu rong
    float chieuDai, chieuRong;

    // Nhap chieu dai va chieu rong tu nguoi dung
    cout << "Nhap chieu dai cua hinh chu nhat: ";
    cin >> chieuDai;
    
    cout << "Nhap chieu rong cua hinh chu nhat: ";
    cin >> chieuRong;

    // Tinh chu vi va dien tich
    float chuVi = 2 * (chieuDai + chieuRong);
    float dienTich = chieuDai * chieuRong;

    // In ket qua
    cout << "Chu vi cua hinh chu nhat: " << chuVi << endl;
    cout << "Dien tich cua hinh chu nhat: " << dienTich << endl;

    return 0;
}
