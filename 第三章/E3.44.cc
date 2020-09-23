/*用范围for遍历二维数组
 *用类型别名*/
#include <iostream>
using std::cout;
using std::endl;

//类型别名
using int4=int[4];

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int4 &row : ia)
        for (int col : row)
            cout << col << " ";
    cout<<"\n";
    return 0;
}