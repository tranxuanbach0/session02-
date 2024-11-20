#include <stdio.h>

int main() {
    // khai bao hang so Pi va ban kinh hinh tron 
    const float PI = 3.14;  // hang so PI voi gia tri 3.14
    float radius = 7.0;     // ban kinh hinh tron  
    // Tinh chu vi hinh tron 
    float circumference = 2 * PI * radius;   // Chu vi = 2 * PI * ban kinh  
    float area = PI * radius * radius;       // Dien tich = PI * ban kinh^2

    // In ket qua ra man hinh 
    printf("ban kinh hinh tron: %.2f\n", radius);
    printf("chu vi hinh tron: %.2f\n", circumference);
    printf("dien tich hinh tron: %.2f\n", area);

    return 0;
}
