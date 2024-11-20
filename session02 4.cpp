#include <stdio.h>

int main() {
    // khai bao va khoi tao canh hinh vuong 
    float side = 10.0; // canh hinh vuong 
    // Tính chu vi và dien tich hinh vuong
    float perimeter = 4 * side; // Chu vi = 4 * canh
    float area = side * side;   // Dien tich = canh * canh

    // In ket qua ra man hinh 
    printf("canh cua hinh vuong: %.2f\n", side);
    printf("chu vi cua hinh vuong: %.2f\n", perimeter);
    printf("dien tich cua hinh vuong: %.2f\n", area);

    return 0;
}
