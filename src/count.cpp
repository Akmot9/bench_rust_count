#include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    
    for (int i = 0; i <= 1000000; i++) {
        // Boucle vide
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "Time elapsed in counting to 1,000,000 is: " << elapsed.count() << " ms\n";

    return 0;
}
