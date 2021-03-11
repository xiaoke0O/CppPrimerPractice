#include <list>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;
int main()
{
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i)
    {
        lst.push_back(i);
    }
    // 原错误语句copy(lst.cbegin(), lst.cend(), vec.begin());
    copy(lst.cbegin(), lst.cend(), back_inserter(vec));
    // 输出vec内容，可选
    // copy(vec.cbegin(), vec.cend(), out_iter);
    // cout << endl;

    //(b)题
    vector<int> vec2;
    // 原语句
    // vec.resize(10);
    // fill_n(vec2.begin(),10,0);
    // 正确语句
    fill_n(back_inserter(vec2), 10, 0);
    // 输出vec2内容，可选
    // copy(vec2.cbegin(), vec2.cend(), out_iter);
}