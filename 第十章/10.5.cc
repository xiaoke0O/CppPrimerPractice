#include <vector>
#include<iostream>
using namespace std;
int main()
{
    vector<const char *> roster1 = {"WORLD", "world"};
    vector<const char *> roster2 = {"WORLD", "world"};
    auto result=equal(roster1.cbegin(),roster1.cend(),roster2.cbegin());
    cout<<result<<endl;
}