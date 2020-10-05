//输出每一种内置类型所占空间的大小
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "char size: " << sizeof(char) << " byte(s)" << endl;
    cout << "short size: " << sizeof(short) << " byte(s)" << endl;
    cout << "int size: " << sizeof(int) << " byte(s)" << endl;
    cout << "long size: " << sizeof(long) << " byte(s)" << endl;
    cout << "long long size: " << sizeof(long long) << " byte(s)" << endl;
    cout << "float size: " << sizeof(float) << " byte(s)" << endl;
    cout << "double size: " << sizeof(double) << " byte(s)" << endl;
    return 0;
}
