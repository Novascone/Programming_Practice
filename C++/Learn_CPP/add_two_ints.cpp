#include <iostream>

int main(int argc, char const *argv[])
{
    int n{ };
    int m{ };
    int n_plus_m{ };
    int n_minus_m{ };
    std::cout << "Enter an integer ";
    std::cin >> n;
    std::cout << "Enter another integer ";
    std::cin >> m;
    n_plus_m = n + m;
    n_minus_m = n - m;
    std::cout << n << " + " << m << " is " << n_plus_m << std::endl;
    std::cout << n << " - " << m << " is " << n_minus_m << std::endl;
    return 0;
}
