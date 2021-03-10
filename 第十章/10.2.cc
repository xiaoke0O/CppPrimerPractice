#include <algorithm>
#include <iostream>
#include <string>
#include <list>
using namespace std;
int main()
{
    list<string> v = {"Hello", "World", "world", "hello", "world", "hello"};
    auto result = count(v.cbegin(), v.cend(), "world");
    cout << result << endl;
    return 0;
}