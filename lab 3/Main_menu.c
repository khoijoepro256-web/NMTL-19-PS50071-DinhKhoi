#include<stdio.h>
#include<math.h>
int main (){
    int chon;
    float diem,a,b,c,x1,x2,delta;

    do
    {
        printf("+------------------------------------------------+\n");
        printf("|         MENU CHUONG TRINH LAB 3                |\n");
        printf("+------------------------------------------------+\n");
        printf("| 1.Chuc nang tinh hoc luc sinh vien             |\n");
        printf("| 2.Chuc nang giai phuong trinh bac hai          |\n");
        printf("| 3.Chuc nang tinh tien dien tieu thu hang thang |\n");
        printf("| 4.Thoat chuong trinh                           |\n");
        printf("+------------------------------------------------+\n");
        printf(">>Chon chuc nang cua ban (1-4):");
        scanf("%d",&chon);

    
        switch(chon)
        {
            case 1:
                printf("Ban chon chuc nang tinh hoc luc sinh vien\n");
                printf("Nhap vao diem so cua sinh vien:\n");
                scanf("%f",&diem);

                if (diem >= 9) {
                printf("Hoc luc Xuat sac\n");
            } 
            else if (diem >= 8) { 
                printf("Hoc luc Gioi\n");
            } 
            else if (diem >= 6.5) { 
                printf("Hoc luc Kha\n");
            } 
            else if (diem >= 5) { 
                printf("Hoc luc Trung binh\n");
            } 
            else if (diem >= 3.5) { 
                printf("Hoc luc Yeu\n");
            } 
            else if (diem >= 0) { 
                printf("Hoc luc Kem\n");
            } 
            else if(diem<0&&diem>10){
                printf("Diem so nhap vao khong hop le!\n");
            }
                  
            break;
            case 2:
                printf("Ban chon chuc nang giai phuong trinh bac hai\n");
                printf("Giai phuong trinh ax^2+bx+c=0\n");
                printf("Nhap vao he so a\n");
                scanf("%f", &a);
                printf("Nhap vao he so b:\n");
                scanf("%f",&b);
                printf("Nhap vao he so c\n");
                scanf("%f",&c);
                if(a==0){
                    if(b==0&&c==0){
                        printf("Phuong trinh co vo so nghiem.\n");
                    }
                    else if(b==0&&a!=0){
                        printf("Phuong trinh vo nghiem.");
                    }
                    else if(b!=0){
                        x1=(float)(-c/b);
                        printf("Phuong trinh co nghiem duy nhat:%.2f\n",x1);
                    }
                }
                if(a!=0){
                    delta=b*b-4*a*c;
                    if(delta<0){
                        printf("Phuong trinh vo nghiem.\n");
                    }
                    else if(delta==0){
                        x1=x2=(float)(-b/(2*a));
                        printf("Phuong trinh co nghiem kep x1=x2=%.2f\n",x1);
                    }
                    else if(delta>0){
                        x1 = (-b + sqrt(delta)) / (2*a);
                        x2= (-b - sqrt(delta)) / (2*a);
                        printf("Phuong trinh co 2 nghiem rieng biet:\n");
                        printf("x1=%.2f\n",x1);
                        printf("x2=%.2f\n",x2);
                    }
                }
                   
                
            break;
            case 3:
                printf("Ban chon chuc nang tinh tien dien tieu thu hang thang\n");
            break;
            case 4:
                printf("Thoat chuong trinh\n");
            break;
            default:
                printf("Ban phai chon chuc nang 1-4\n");
            break;
        }
    }while (chon!=4);

    return 0;
    }
