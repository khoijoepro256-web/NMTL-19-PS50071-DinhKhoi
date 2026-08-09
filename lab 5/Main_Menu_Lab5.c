#include <stdio.h>
#include <stdbool.h>
void menu();
void chucnang1();
void chucnang2();
void chucnang3();
void chucnang4();
bool kiemtranamnhuan(int nam);
int solonnhat(int a, int b, int c);
void swap(int *a, int *b);
const char* checkTriangle(float a, float b, float c);

    
 int main(){

    int chon;
    do
    {
        menu();
        printf(">>Xin moi chon chuc nang (1-5)");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            chucnang1();
            break;
        case 2:
            chucnang2();
            break;
        case 3:
            chucnang3();
            break;
        case 4:
            chucnang4();
            break;
        case 5:
            printf("Ban da chon thoat chuong trinh!\n");
            break;
        default:
        printf("Khong hop le! Ban phai chon chuc nang tu 1 den 5!\n");
            break;
        }
    } while (chon !=5);
    return 0;
}
    void menu(){
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 5               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tim gia tri lon nhat trong 3 so                |\n");
        printf("| 2. Kiem tra nam nhuan                             |\n");
        printf("| 3. Hoan vi hai so (Su dung Con tro)               |\n");
        printf("| 4. Kiem tra & Phan loai Tam giac                  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
    }
    //Tìm giá trị lớn nhất trong 3 số
    void chucnang1()
    {
        printf("Chuc nang 1: Tim gia tri lon nhat trong 3 so\n");
        int a, b, c;
        printf("Nhap a, b, c: ");
        scanf("%d %d %d", &a, &b, &c);
        printf("So lon nhat la: %d\n", solonnhat(a, b, c));
    }
    int solonnhat(int a, int b, int c){
        int lonnhat= a;
        if (b > lonnhat){
            lonnhat = b;
        }
        if (c > lonnhat){
            lonnhat = c;
        }
        return lonnhat;
    }
    //Kiểm tra Năm nhuận
    void chucnang2()
    {
        printf("Chuc nang 2: Kiem tra nam nhuan\n");
        int nam;
        printf("Nhap nam: ");
        scanf("%d",&nam);
        if(kiemtranamnhuan(nam)){
            printf("Nam %d la nam nhuan\n", nam);
        }
        else{
            printf("Nam %d khong phai la nam nhuan\n", nam);
        }
    }
    //Năm nhuận là năm chia hết cho 400, hoặc chia hết cho 4 nhưng không chia hết cho 100
    bool kiemtranamnhuan(int nam){

        if((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)){
            return true;
        }
        else{
            return false;
        }
    }
    void chucnang3()
    {
        printf("Chuc nang 3: Hoan vi hai so (Su dung Con tro)\n");
        int x, y;
        printf("Nhap hai so x va y: ");
        scanf("%d %d", &x, &y);
        printf("Truoc khi hoan vi: x = %d, y = %d\n", x, y);
        swap(&x, &y);
        printf("Sau khi hoan vi: x = %d, y = %d\n", x, y);
    }
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void chucnang4()
    {
        float a, b, c;
        printf("Nhap 3 canh a,b,c: ");
        scanf("%f%f%f", &a, &b, &c);
        printf("%s\n",checkTriangle(a, b, c));
}


    const char* checkTriangle(float a, float b, float c){
        if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
            if(a==b && b==c)
                return "Tam giac deu.";
            else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            {
            if(a==b || a==c || b==c){
                return "Tam giac vuong can";
            }else{
                return "Tam giac vuong";
            }
        }else 
            return "Tam giac thuong";
    else
        return "Khong phai la bo 3 canh cua tam giac";
}
    
    
    
