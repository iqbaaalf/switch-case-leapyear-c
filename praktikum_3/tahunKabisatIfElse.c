#include <stdio.h>

int main() {
    int bulan, tahun, hari;

    printf("Masukkan angka bulan (1-12): ");
    if (scanf("%d", &bulan) != 1) {
        printf("Input tidak valid!\n");
        return 1;
    }

    printf("Masukkan tahun: ");
    if (scanf("%d", &tahun) != 1) {
        printf("Input tidak valid!\n");
        return 1;
    }

    if (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12) {
        hari = 31;
    }
    else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
        hari = 30;
    }
    else if (bulan == 2) {
        if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
            hari = 29;
        } else {
            hari = 28;
        }
    }
    else {
        printf("Bulan tidak valid\n");
        return 1;
    }

    printf("Jumlah hari = %d\n", hari);

    return 0;
}