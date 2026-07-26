#include <stdio.h>

int main(){

    int chon;

    do{
        printf("+-------------------------------------------------------------------------------+\n");
        printf("|                          MENU CHUONG TRINH TONG HOP                           |\n");
        printf("+-------------------------------------------------------------------------------+\n");
        printf("| 1. Chuc nang so 1: Kiem tra so nguyen                                         |\n");
        printf("| 2. Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so                  |\n");
        printf("| 3. Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke                    |\n");
        printf("| 4. Chuc nang so 4: Tinh tien dien                                             |\n");
        printf("| 5. Chuc nang so 5: Chuc nang doi                                              |\n");
        printf("| 6. Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop |\n");
        printf("| 7. Chuc nang so 7: Xay dung chuong trinh vay tien mua xe                      |\n");
        printf("| 8. Chuc nang so 8: Sap xep thong tin sinh vien                                |\n");
        printf("| 9. Chuc nang so 9: Xay dung game FPOLY-LOTT(2/15)                             |\n");
        printf("| 10. Chuc nang so 10: Xay dung chuong trinh tinh toan phan so                  |\n");
        printf("| 11. Thoat chuong trinh                                                        |\n");
        printf("+-------------------------------------------------------------------------------+\n");
        printf(">>>CHON CHUC NANG \n");
        scanf("%d",&chon);

        switch(chon)
        {
            case 1:
                printf("Ban chon chuc nang so 1: Kiem tra so nguyen\n");
            break;
            case 2:
                printf("Ban chon chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so\n");
            break;
            case 3:
                printf("Ban choc chuc nang so 3: Chuong trinh tinh tien dien cho quan karaoke\n");
            break;
            case 4:
                printf("Ban chon chuc nang so 4: Tinh tien dien\n");
            break;
            case 5:
                printf("Ban choc chuc nang so 5: Chuc nang doi\n");
            break;
            case 6:
                printf("Ban chon chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang tra gop\n");
            break;
            case 7:
                printf("Ban chon chuc nang so 7: Xay dung chuong trinh vay tien mua xe\n");
            break;
            case 8:
                printf("Ban chon chuc nang so 8: Sap xep thong tin sinh vien\n");
            break;
            case 9:
                printf("Ban chon chuc nang so 9: Xay dung game FPOLY-LOTT(2/5)\n");
            break;
            case 10:
                printf("Ban chon chuc nang so 10: Xay dung chuong trinh toan phan so\n");
            break;
            case 11:
                printf("Thoat chuong trinh\n");
            break;
            default:
                printf("Khong hop le! Xin vui long chon lai...\n");
                break;

        }
    }while(chon!=11);
    return 0;
}