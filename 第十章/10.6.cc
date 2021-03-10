#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    //输出流迭代器，后边会学到
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> v(10, 9);
    //输出原内容
    copy(v.cbegin(), v.cend(), out_iter);
    cout << endl;
    //fill_n充填
    fill_n(v.begin(), v.size(), 0);
    //输出充填后内容
    copy(v.cbegin(), v.cend(), out_iter);
    cout << endl;
    return 0;
}