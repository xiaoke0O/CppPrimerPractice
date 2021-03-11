#include<iostream>
using std::cout;
using std::endl;
int main(){
    int x=12;
    auto f=[x](int y){return x+y;};
    cout<<f(8)<<endl;
}