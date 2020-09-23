/*用下标运算符遍历二维数组
 *不能用类型别名、auto关键字或decltype关键字*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
    cout << "\n";
    return 0;
}