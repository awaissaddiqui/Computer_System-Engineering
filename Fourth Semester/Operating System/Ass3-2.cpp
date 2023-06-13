#include <chrono>
#include <iostream>

int product_serial(int n)
{
    int i = 1;
    int mult = 1;
    while (i <= n) {
        mult *= i;
        ++i;
    }
    return mult;
}

int product_parallel(int n)
{
    int i = 1;
    int mult = 1;
    #pragma omp parallel for reduction(* : mult)
    for (i = 1; i <= n; ++i) {
        mult *= i;
    }
    return mult;
}

int main()
{
    const int n = 30;

    auto start_time = std::chrono::high_resolution_clock::now();
    int result_serial = product_serial(n);
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> serial_duration = end_time - start_time;

    start_time = std::chrono::high_resolution_clock::now();
    int result_parallel = product_parallel(n);
    end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> parallel_duration = end_time - start_time;

    std::cout << "Serial result: " << result_serial << std::endl;
    std::cout << "Parallel result: " << result_parallel << std::endl;
    std::cout << "Serial duration: " << serial_duration.count() << " seconds" << std::endl;
    std::cout << "Parallel duration: " << parallel_duration.count() << " seconds" << std::endl;
    std::cout << "Speedup: " << serial_duration.count() / parallel_duration.count() << std::endl;

    return 0;
}
