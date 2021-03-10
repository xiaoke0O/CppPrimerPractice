#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {12, 34, 45, 13, 45, 65};
    auto result = count(v.cbegin(), v.cend(), 45);
    cout << result << endl;
    return 0;
}