// Tổng số gạo các ô bàn cờ vua
#include <stdio.h>

int main() {
    int i;
    double tong = 0; // Khởi tạo tổng bằng 0
    double n = 1;    // Ô đầu tiên có 1 hạt gạo

    printf("O\t Sogao\t Tong\t\n ");

    // Bàn cờ có 64 ô, chạy từ 1 đến 64
    for(i = 1; i <= 64; i++) {
        tong += n; // tong= tong + n Cộng số gạo của ô hiện tại vào tổng
        n *= 2;    // n = n * 2 Số gạo ô tiếp theo gấp đôi ô trước
        printf("%0.d\t %0.lf\t %0.lf\t\n",i,n,tong);
    }

    // In kết quả SAU KHI vòng lặp kết thúc
    printf("\nTong so gao tren 64 o ban co vua la: %.0lf\n", tong);

    return 0;
}