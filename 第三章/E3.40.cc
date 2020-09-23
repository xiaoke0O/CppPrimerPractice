/*定义两个字符数组并用字符串字面量值初始化
 *定义一个字符串数组存放两个数组的连接，用strcpy和strcat*/

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::strcat;
using std::strcpy;
using std::strlen;
int main()
{
    const char stringA[]="Hello ";
    const char StringB[]="World!";
    auto ABlen=strlen(stringA)+strlen(StringB);
    // char StringC[ABlen]="";
    char StringC[ABlen]="";
        cout<<strlen(StringC)<<"\n";
    strcpy(StringC,stringA);
            cout<<strlen(StringC)<<"\n";
    strcat(StringC,StringB);
            cout<<strlen(StringC)<<"\n";
    for(auto ch:StringC)
    cout<<ch;
    cout<<strlen(StringC)<<"\n";



    return 0;
}