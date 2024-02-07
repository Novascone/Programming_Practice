#include <iostream>

int main(int argc, char const *argv[])
{
    int n{ };
    std::cout << "Enter an integer ";
    std::cin >> n;
    n *= 2;
    std::cout << "Double that number is: " << n; 
    return 0;
}
