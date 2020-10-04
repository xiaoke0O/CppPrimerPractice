/*从文件中读取，文件是data/books
* 方法是从命令行运行:
* 程序名 <data/books
* 当然也可以手动输入，按Ctrl+D结束。Windows是Ctrl+Z+Enter
*/

#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    while(std::cin>>book)
    std::cout<<book<<std::endl;
    return 0;
}