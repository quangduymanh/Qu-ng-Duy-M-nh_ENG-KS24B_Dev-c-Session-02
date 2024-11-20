#include <stdio.h>

int main() {
    // Kieu du lieu int: Dung de khai bao so nguyen
    int a = 10; // a la so nguyen 10
    
    // Kieu du lieu float: Dung de khai bao so thuc co dau phay
    float b = 5.98; // b la so thuc 5.98
    
    // Kieu du lieu double: Dung de khai bao so thuc co do chinh xac cao hon float
    double c = 3.1415926535; // c la so thuc 3.1415926535
    
    // Kieu du lieu char: Dung de khai bao ky tu (1 ky tu)
    char d = 'A'; // d la ky tu 'A'
    
    // Kieu du lieu long: Dung de khai bao so nguyen dai hon int
    long e = 1234567890; // e la so nguyen dai 1234567890
    
    // Kieu du lieu short: Dung de khai bao so nguyen nho hon int
    short f = 32767; // f la so nguyen 32767
    
    // Kieu du lieu unsigned: Dung de khai bao so nguyen khong am
    unsigned int g = 5000; // g la so nguyen khong am 5000

    // In ket qua ra man hinh
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.10f\n", c);
    printf("d = %c\n", d);
    printf("e = %ld\n", e);
    printf("f = %hd\n", f);
    printf("g = %u\n", g);
    
    return 0;
}
