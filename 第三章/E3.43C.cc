/*用指针遍历二维数组
 *不能用类型别名、auto关键字或decltype关键字*/
#include <iostream>
using std::begin;
using std::cout;
using std::end;
using std::endl;
int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // for (int(*p)[4] = begin(ia); p != end(ia); ++p)
    //     for (int *q = begin(*p); q != end(*p); ++q)
    //         cout << *q << " ";
    for (int(*p)[4] = ia; p != ia+3; ++p)
        for (int *q = *p; q != *p+4; ++q)
            cout << *q << " ";
    cout << "\n";
    return 0;
}