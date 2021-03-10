#include <numeric>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    auto result = accumulate(v.cbegin(), v.cend(), 0);
    cout << result << endl;
    return 0;
}