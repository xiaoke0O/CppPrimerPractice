/*读取多条销售记录，并统计每个ISBN有几条销售记录
 *思路类似于E1.8*/
#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    if(std::cin>>book)
    {
        int cnt=1;
        Sales_item book2;
        while(std::cin>>book2){
            if(book.isbn()==book2.isbn())
            ++cnt;
            else
            {
                std::cout<<book.isbn()<< " occurs " << cnt << " times" << std::endl;
                book=book2;
                cnt=1;
            }
        }
        std::cout << book.isbn() << " occurs " << cnt << " times" << std::endl;
    }
    
    return 0;
}
