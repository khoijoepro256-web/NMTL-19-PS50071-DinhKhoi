#include <stdio.h>
#include <stdbool.h>
#include <float.h>
void menu();
void chucnang1();
void chucnang2();
void chucnang3();
void chucnang4();
void chucnang5();

float tinhtrungbinhcong(int a[], int n);
void matranbinhphuong(int row, int col);
void timMaxMin(int a[], int n);
void sapxepgiamdan(int a[], int n);
void swap(int *a, int *b);
void xuatSoLeMaTran(int row, int col);

    
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
            chucnang5();
            break;
        case 6:
            printf("Ban da chon thoat chuong trinh!\n");
            break;
        default:
        printf("Khong hop le! Ban phai chon chuc nang tu 1 den 6!\n");
            break;
        }
    } while (chon != 6);
    return 0;
}
    void menu(){
        printf("+--------------------------------------------------------+\n");
        printf("|                 MENU CHUONG TRINH LAB 6                |\n");
        printf("+--------------------------------------------------------+\n");
        printf("| 1. Tinh trung binh cong cac so chia het cho 3 va 5     |\n");
        printf("| 2. Tim gia tri lon nhat va nho nhat trong mang         |\n");
        printf("| 3. Sap xep mang theo thu tu giam dan                   |\n");
        printf("| 4. Ma tran binh phuong (Mang 2 chieu)                  |\n");
        printf("| 5. Loc va xuat vi tri cac so le trong ma tran          |\n");
        printf("| 6. Thoat chuong trinh                                  |\n");
        printf("+--------------------------------------------------------+\n");
        printf(">> Xin mời chọn chức năng (1-6): ");
    }
    //Tìm giá trị lớn nhất trong 3 số
    float tinhtrungbinhcong(int a[], int n);
    void chucnang1()
    {
        printf("Chuc nang 1: Tinh trung binh cong cac so chia het cho 3 va 5\n");
        
        int n;
        int a[10];
        printf("Nhap n :\n ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Nhap a[%d]: ", i);
            scanf("%d", &a[i]);
        }
        float trungbinh = tinhtrungbinhcong(a, n);
        if (trungbinh == -__FLT_MAX__)
        {
            printf("Khong co so nao chia het cho 3 va 5 trong mang.\n");
        }
        else
        {
            printf("Trung binh cong cac so chia het cho 3 va 5 la: %.2f\n", trungbinh);
        }
    }
        float tinhtrungbinhcong(int a[], int n){
    
        int tong=0;
        int sodem=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%3==0 && a[i]%5==0)
            {
                tong+=a[i];
                sodem++;
            }
        }
        if (sodem==0){
            return -FLT_MAX; // Số nhỏ nhất trong float
        }
        else{
            return (float)tong/sodem;
        }
    }
   
    //Tìm  giá trị lớn nhất và nhỏ nhất trong mảng
    void chucnang2()
    {
        int n;
        int a[10];
        printf("Nhap n: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("Nhap A[%d]= ",i);
            scanf("%d",&a[i]);
        }
    timMaxMin(a,n);
    }
    void timMaxMin(int a[], int n){
    //4 6 3 8
    int min,max;
    min=a[0]; //4
    max=a[0]; //4
    for(int i=1;i<n;i++){
        if(min>a[i]){   //1   4 > 6  
                        //2   4 > 3   min = 3
            min=a[i];
        }
        if(max<a[i]){   //1   4 < 6  max = 6
                        //2   6 < 3
            max=a[i]; 
        }
    }
    printf("Min = %d\t Max = %d\n",min,max);
}
    // Chuc nang 3: Sap xep mang theo thu tu giam dan
    void chucnang3()
    {
        int n;
        int a[10];
        printf("Nhap n: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
        printf("Nhap A[%d]= ",i);
        scanf("%d",&a[i]);
        }
        sapxepgiamdan(a,n);
    }
    void sapxepgiamdan(int a[], int n)
    {
        for (int i=0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j]) //
                {
                    swap(&a[i], &a[j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }
    void swap(int *a, int *b)
    {
    int temp = *a;
    *a = *b;
    *b = temp;
    }
    //Ma trận bình phương     
    void chucnang4()
    {
        int row, col;
        printf("Nhap so hang va so cot cua ma tran: ");
        scanf("%d %d", &row, &col);
        matranbinhphuong(row, col);
    }
    void matranbinhphuong(int row, int col)
    {
        // Nhập ma trận
        int a[10][10];
        printf("Nhap cac phan tu cua ma tran:\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }

        }
        // Xuất ma trận bình phương
        printf("Ma tran binh phuong la:\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(a[i][j]%2==0)
                {
                    printf("%3d\t", a[i][j] * a[i][j]);

                }else
                {
                    printf("%3d\t", a[i][j]);
                }
                
            }
                printf("\n");
        }
    
    }
   
    void chucnang5()
    {
        xuatSoLeMaTran(2, 2);
    }
    void xuatSoLeMaTran(int row, int col)
    {
        int a[row][col];
    // nhap
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("A[%d,%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // xuat 
    printf("Vi tri cac so le trong ma tran:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                printf("A[%d,%d] = %d\n", i, j, a[i][j]);
            }
        }
    }
    }
   