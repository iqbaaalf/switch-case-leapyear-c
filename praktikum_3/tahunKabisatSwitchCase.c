#include <stdio.h>

int main() {
    int bulan, tahun, hari;

    printf("Masukkan angka bulan (1-12): ");
    scanf("%d", &bulan);
    
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    switch (bulan) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            hari = 31;
            break;
        case 4: case 6: case 9: case 11:
            hari = 30;
            break;
        case 2:
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
                hari = 29;
            } else {
                hari = 28;
            }
            break;
        default:
            printf("Bulan tidak valid!\n");
            return 1;
    }

    printf("Jumlah hari = %d\n", hari);

    return 0;
}
