#include <stdio.h>
#include <math.h>
int main() {

    float a, b, c, x1, x2, delta;
    
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;
    if (delta == 0) {
        x1=x2=(-b/(2*a));
        printf("Phuong trinh co nghiem kep x1=x2=%.2f", x1);
    }
    else if (delta > 0) {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("Phuong trinh co hai nghiem phan biet x1=%.2f va x2=%.2f", x1, x2);
    }
    else if (delta < 0) {
        printf("Phuong trinh vo nghiem");
    }

    return 0;
}