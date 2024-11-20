#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen 
    int num1 = 1; // Bien so nguyen thu nhat 
    int num2 = 1; // Bien so nguyen thu hai 

    // Tinh tong cua hai so roi luu ket qua va sum 
    int sum = num1 + num2;   // tong 
    int difference = num1 - num2;   // hieu 
    int product = num1 * num2;      // tich
    int quotient = num1 / num2; // thuong 
    
    // In ket qua ra man hinh  
    printf("Tong cua %d và %d là: %d\n", num1, num2, sum);
    printf("Hieu cua %d và %d là: %d\n", num1, num2, difference);
    printf("Tich cua %d và %d là: %d\n", num1, num2, product);
    printf("Thuong cua %d và %d là: %.2f\n", num1, num2, quotient);
    
    return 0;
}
