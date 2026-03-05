#include <stdio.h>
#include <limits.h> // Untuk INT_MAX dan INT_MIN

int main() {
    int n;
    int sum = 0;
    
    // Membaca jumlah nilai yang akan dimasukkan (n)
    scanf("%d", &n);

    // Deklarasi array untuk menyimpan nilai-nilai mahasiswa
    int scores[n]; 
    int min_score = INT_MAX; // Inisialisasi dengan nilai maksimum integer
    int max_score = INT_MIN; // Inisialisasi dengan nilai minimum integer

    // Membaca n nilai dan menghitung total jumlahnya, sekaligus menyimpan ke array
    // dan mencari nilai minimum serta maksimum
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];

        if (scores[i] < min_score) {
            min_score = scores[i];
        }
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
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

    // Menghitung dan menampilkan rentang nilai (maksimum - minimum)
    int range = max_score - min_score;
    printf("%d\n", range);

    return 0;
}