#include <stdio.h>

int main(){
    int a=5,b,c;

    b=++a; // Cộng thêm 1 vào a trước khi gán giá trị cho b (b = 6, a = 6)
    c=a++; // Gán giá trị của a cho c trước khi cộng thêm 1 vào a (c = 6, a = 7)

    printf(" a: %d b: %d c: %d\n", a, b, c); // In ra giá trị của a, b và c

    return 0;
    


}