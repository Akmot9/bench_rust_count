#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    for (int i = 0; i <= 1000000; i++) {
        // Boucle vide
    }
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC * 1000; // Convertir en millisecondes

    printf("Time elapsed in counting to 1,000,000 is: %f ms\n", cpu_time_used);

    return 0;
}
