#include <iostream>
#include "include/turkish.h"
#include <string>

int main()
{
    int number;
    std::cout << "Введите число";
    std::cin >> number;
    std::cout << "result: " << convertNumberToTurkish(number) << std::endl;

    return 0;
}
