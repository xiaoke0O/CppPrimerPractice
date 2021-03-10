#include <numeric>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<double> v = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    // 如果第三个参数是0，结果是21而不是23.1。
    // accumulate第三个参数值的类型决定了返回值的类型
    auto result = accumulate(v.cbegin(), v.cend(), 0);
    cout << result << endl;
    return 0;
}