#include <iostream>
int main()
{
    int var1 = 0, var2 = 0;
    std::cin >> var1 >> var2;
    std::cout << "The product of ";
    std::cout << var1; 
    std::cout << " and "; 
    std::cout << var2; 
    std::cout << " is ";
    std::cout << var1 * var2 << std::endl;
    return 0;
}