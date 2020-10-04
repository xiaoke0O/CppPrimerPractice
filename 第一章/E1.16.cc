/*从cin读取一组数，求和*/
#include <iostream>

int main()
{
    int value = 0, sum = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "The sum of these numbers is " << sum << std::endl;
}