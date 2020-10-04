/*作为1.21的扩展
* 1.21只能对两个求和，1.22要求对多个
* 目前依然不能利用类成员函数isbn()进行判断*/

#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item book,sumBook;
    while (std::cin>>book)
        sumBook+=book;
    std::cout<<sumBook<<std::endl;
    return 0;
}