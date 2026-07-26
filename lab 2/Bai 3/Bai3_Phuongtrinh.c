#include <stdio.h>
#include <stdlib.h>
//Giai phuong ax+b=0 voi he so a khac 0
int main   (){
    float a,b,x;

    do {
        printf("Nhap he so a (a khac 0): ");
        scanf("%f", &a);

        if (a == 0) {
            printf("He so a phai khac 0. Vui long nhap lai.\n");
        }
    } while (a == 0);
 
    printf("Nhap he so b: "); 
    scanf("%f", &b);

    x=-(float)b/a;


    printf("===KET QUA===\n");
    printf("Nghiem cua phuong trinh %.2fx + %.2f=0 la x= %.2f\n",a ,b ,x);
    system("pause");

    return 0;
}
