/*循环输出10到0之间的整数*/

#include <iostream>

int main()
{
    int a = 10;             //初始值为10
    while (a >= 0)          //当a还大于0时，执行循环
    {
    std::cout << a << std::endl;    //输出当前的a值
        --a;                //a=a-1,a减小1
    }
    return 0;
}