#include <iostream>

// int main()
// {
//     int sum = 0;                    //用来存放和
//     for (int a = 50; a <= 100; ++a) //a从50-100开始循环
//         sum += a;                   //sum=sum+a,每次循环，都给sum加上新的a值
//     std::cout << sum << std::endl;  //输出结果
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     //初始值为10
//     for (int a = 10; a >= 0; --a)    //当a还大于0时，执行循环
//         std::cout << a << std::endl; //输出当前的a值
//     return 0;
// }

#include <iostream>
int main()
{
    //提示用户输入两个数，先小后大
    std::cout << "input two number(Small first then big): " << std::endl;
    int a, b;
    std::cin >> a >> b;              //捕获用户的输入
    for (; a <= b; ++a)              //当a<=b时执行循环
        std::cout << a << std::endl; //输出a值
    return 0;
}
