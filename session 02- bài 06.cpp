#include <stdio.h>

#define PI 3.14  // Khai bao hang so PI voi gia tri 3.14

int main() {
    float radius;  // Khai bao bien ban kinh kieu float
    float circumference, area;  // Khai bao bien chu vi va dien tich hinh tron

    // Nhap ban kinh hinh tron
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &radius);

    // Tinh chu vi va dien tich
    circumference = 2 * PI * radius;  // Chu vi = 2 * PI * ban kinh
    area = PI * radius * radius;      // Dien tich = PI * ban kinh^2

    // In ket qua
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}
