#include<vector>
#include<iostream>
using std::cout;
using std::vector;

int main(){
    vector<int> intVec{1,2,3,4,5,6,7,8,9,10};
    int int_arr[10];
    //用vector为数组赋值

    //有了size()就不要用int了，所以i用了auto
    for(auto i=0;i<intVec.size();i++)
    int_arr[i]=intVec[i];

    //输出数组
    for(auto number:int_arr)
    cout<<number<<" ";
    cout<<"\n";
    return 0;
}