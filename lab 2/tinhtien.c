#include <stdio.h>
#define dollar 26.29

int main() {
    int slgao, sldau;
    float tiengao, tiendau, tongtien;

    printf("Nhap so luong gao : ");
    scanf("%d", &slgao);
    printf("Nhap so luong dau : ");
    scanf("%d", &sldau);

    tiengao = slgao * 2 * dollar;
    tiendau = sldau * 1.5 * dollar;

    printf("===KET QUA===\n");
    printf("Tien gao: %.2f VND\n", tiengao);
    printf("Tien dau: %.2f VND\n", tiendau);

    return 0;
    
}
