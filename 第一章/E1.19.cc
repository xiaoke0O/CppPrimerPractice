/*输入两个整数A,B
 *输出这两个整数之间的数
 *如果A>B就输出A->B
 *如果A<B就输出B->A
 * */

#include <iostream>
int main()
{
    std::cout << "input two number: " << std::endl;
    int a, b;
    std::cin >> a >> b;
    if (a > b)
    {
        while (a >= b)
        {
            std::cout << a << std::endl;
            --a;
        }
    }
    else
    {
        while (a <= b)
        {
            std::cout << a << std::endl;
            ++a;
        }
    }

    return 0;
}