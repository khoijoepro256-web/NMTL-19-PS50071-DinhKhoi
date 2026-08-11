#include <stdio.h>
#include <string.h>
#include <ctype.h> 


void chucnang1();
void chucnang2();
void chucnang3();
void chucnang4();

int main()
{
    int luaChon;
    do
    {
        printf("\n+-------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 7              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Dem Nguyen am va Phu am trong chuoi            |\n");
        printf("| 2. Dang nhap he thong (User & Password)           |\n");
        printf("| 3. Sap xep danh sach Chuoi theo thu tu Alphabet   |\n");
        printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi)  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &luaChon);
        
    

        switch (luaChon)
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
                printf("Thoat chuong trinh... Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap tu 1 den 5.\n");
        }
    } while (luaChon != 5);

    return 0;
}

void chucnang1()
{
    printf("Chuc nang 1 chua duoc cai dat.\n");
}

