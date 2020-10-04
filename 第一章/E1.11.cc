/*输入两个整数A,B,先小后大
 *输出这两个整数之间的数
 */

#include <iostream>

int main()
{
    //提示用户输入两个数，先小后大
    std::cout << "input two number(Small first then big): " << std::endl;
    int a, b;
    std::cin >> a >> b;//捕获用户的输入
    while (a <= b)     //当a<=b时执行循环
    {
        std::cout << a << std::endl;    //输出a值
        ++a;           //a=a+1，输出a后a加1；
    }
    return 0;
}