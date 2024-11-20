#include <stdio.h>

int main() {
    // khai bao va khoi tao chieu dai va chieu rong hinh chu nhat 
    float length = 10.0;  // chieu dai hinh chu nhat  
    float width = 5.0;    // Chieu rong hinh chu nhat 
    // Tính chu vi và dien tich hinh chu nhat 
    float perimeter = 2 * (length + width);  // Chu vi = 2 * (chieu dai + chieu rong)
    float area = length * width;   // dien tich = chieu dai * chieu rong 

    // In ket qua ra man hinh 
    printf("chieu dai hinh chu nhat: %.2f\n", length);
    printf("chieu rong hinh chu nhat: %.2f\n", width);
    printf("chu vi hinh chu nhat: %.2f\n", perimeter);
    printf("dien tich hinh chu nhat: %.2f\n", area);
    
    return 0;
}
