#include <stdio.h>

int main(){
    //In các số từ 0 đến 10
    for(int i=0; i<=10; i++){
        printf("%d\t",i);
    }
    //In các số chẵn từ 1 đến 10
    for(int i=0; i<=10; i++){
        if(i%2==0){
        printf("%d\t,i");
        }
    }
    // In các số chia hết cho 3 từ 1 đến 100
    for(int i=0; i<=100;i++){
        if(i%3==0){
            printf("%d\t",i);
        }
    }
    // In bội của n và m giữa các số từ 1-100
    int n,m;
    printf ("Nhap n và m\n");
    scanf("%d\s%d",&n,&m);
    for(int i=1; i<=100; i++){
        if(i%n==0&&i%m==0){
            printf("%d\t",i);
        }
    }

return 0;
}