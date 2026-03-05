#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    // Membaca jumlah nilai yang akan dimasukkan (n)
    scanf("%d", &n);

    // Deklarasi array untuk menyimpan nilai-nilai mahasiswa
    int scores[n]; 

    // Membaca n nilai dan menghitung total jumlahnya, sekaligus menyimpan ke array
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    // Menghitung nilai rata-rata
    double average = (double)sum / n;

    // Menampilkan jumlah seluruh nilai
    printf("%d\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    // Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    int count_above_average = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_average++;
        }
    }

    // Menampilkan banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    printf("%d\n", count_above_average);

    return 0;
}