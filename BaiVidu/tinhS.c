//Tinh S = 3 + 6 + 9 + ... sao cho s <= 100
#include<stdio.h>

int main(){
    
    int s , t;

    s=0;
    t=1;
     while (s <= 100)
    {
        if(s + 3*t > 100)
        {
            break;
        }else{
        s += 3*t;
        t++;
        }
    }
    printf("Tong nho hon 100: %d\n", s);
    return 0;
}
