/*使用while循环，从50加到100*/

#include <iostream>

int main()
{
    int a = 50;         //起始数
    int sum = 0;        //用来存放和
    while (a <= 100)    //a从50-100开始循环
    {
        sum += a;       //sum=sum+a,每次循环，都给sum加上新的a值
        ++a;            //a=a+1,循环一次，a自增一次
    }
    std::cout << sum << std::endl;  //输出结果
    return 0;
}