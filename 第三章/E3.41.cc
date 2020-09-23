#include <vector>
#include <iostream>
using std::begin;
using std::cout;
using std::end;
using std::vector;

int main()
{
    int int_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //用数组初始化vector

    vector<int> intVec(begin(int_arr), end(int_arr));

    //输出vector
    for (auto i : intVec)
        cout << i <<" ";
    cout << "\n";
    return 0;
}