#include <iostream>
#include <vector>

// 1. typedef
typedef double (*MathOperation)(double, double);

double add(double a, double b) {
    return a + b;
}

int main() {
    // 1. typedef
    MathOperation op = add;
    std::cout << "1. typedef (add): " << op(2.5, 3.5) << std::endl;

    // 2. auto
    std::vector<int> vec = {1, 2, 3};
    std::cout << "2. auto (vector): ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 3. decltype
    int a = 5;
    double b = 2.5;
    decltype(a * b) res = a * b; // res получает тип double
    std::cout << "3. decltype: " << res << std::endl;

    // 4. static_cast
    int sum = 7, count = 2;
    double avg = static_cast<double>(sum) / count;
    std::cout << "4. static_cast: " << avg << std::endl;

    // 5. sizeof
    int arr[] = {10, 20, 30, 40};
    size_t count_elements = sizeof(arr) / sizeof(arr[0]);
    std::cout << "5. sizeof (elements count): " << count_elements << std::endl;

    return 0;
}