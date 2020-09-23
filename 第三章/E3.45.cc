/*用指针遍历二维数组
 *用auto关键字*/
#include <iostream>
using std::begin;
using std::cout;
using std::end;
using std::endl;
int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (auto p = begin(ia); p != end(ia); ++p)
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
    cout << "\n";
    return 0;
}