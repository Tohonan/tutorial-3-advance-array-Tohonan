#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int value;

    // Membaca jumlah nilai yang akan dimasukkan (n)
    scanf("%d", &n);

    // Membaca n nilai dan menghitung total jumlahnya
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        sum += value;
    }

    // Menghitung nilai rata-rata
    // Menggunakan (double) untuk memastikan perhitungan floating-point
    double average = (double)sum / n;

    // Menampilkan jumlah seluruh nilai
    printf("%d\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    return 0;
}