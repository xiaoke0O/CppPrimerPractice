/*读取两个ISBN号相同的书，求和
* 输入0-201-70353-X 4 24.99
*     0-201-70353-X 9 30
* 输出0-201-70353-X 13 369.96 28.4585
* 
* 无法判断是不是同一本书（ISBN号相同），只会机械地做加法并输出均值价格
* 1.21还没有学到成员函数，即还不能利用isbn()判断
*/


#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item book1,book2;
    std::cin>>book1>>book2;
    std::cout<<book1+book2<<std::endl;
    return 0;
}
