#include <stdio.h>
#include <string.h>

int main (){

    int diem;
    char hanhkiem[3];

    printf("Nhap diem cua hoc sinh: ");
    scanf("%d", &diem);

    printf("Nhap hanh kiem cua hoc sinh (T, K, TB, Y): ");
    scanf("%s", hanhkiem);

    if(diem >= 8 && strcmp(hanhkiem, "T") == 0) {
        printf("Hoc sinh xep loai gioi\n");
    } else if(diem >= 6 && strcmp(hanhkiem, "K") == 0){
        printf("Hoc sinh xep loai kha\n");
    } else if(diem >= 5 && strcmp(hanhkiem, "TB") == 0){
        printf("Hoc sinh xep loai trung binh\n");
    } else if(diem < 5 && strcmp(hanhkiem, "Y") == 0){
        printf("Hoc sinh xep loai yeu\n");
    }
    return 0;
}
