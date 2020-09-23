/*比较两个string对象和两个C风格字符串*/
#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::string;
int main()
{
    string cityA = "jiaozuo";
    string cityB = "xuchang";
    if (cityA < cityB)
        cout << "StringA is Less than stringB" << endl;

    const char objectA[] = "apple";
    const char objectB[] = "banana";
    if (strcmp(objectA, objectB))
        cout << "StringA is More than stringB" << endl;
    return 0;
}