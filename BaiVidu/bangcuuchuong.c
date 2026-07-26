#include<stdio.h>
 int main(){
    int n,i;

    printf("Nhap n\n");
    scanf("%d",&n);
    printf("\nBang cuu chuong %d\n",n);
    for(i=1; i<=10; i++){
        printf("%2d x %2d = %3d\n",n,i,n*i);
    }
return 0;
 }
