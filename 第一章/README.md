# 第一章练习题

共有25个练习题，都是非常小的。
> 勿以善小而不为。

## 1.1节练习

### 1.1（编码）

> 运行最小的main()函数

```cpp
    int main(){
        return 0;
    }
```

对于C++代码文件，文件扩展名可以是`.C`, `.cc`, `.cpp`, `.CPP`, `.c++`, `.cp`, 或者 `.cxx`

编译直接就是`g++ 文件名`，会默认生成一个`a.out`可执行文件。`./a.out`运行之。

### 1.2（编码）

> 将上一个练习的返回值改为-1，编译运行

我用的是gcc 9.3.0，编译和运行与上一个练习的结果一样。没有任何异常提示。

## 1.2节练习

### 1.3（编码）

> 在标准输出打印"Hello World"

```cpp
#include <iostream>
int main()
{
    std::cout << "Hello World" << std::endl;
    return 0;
}
```

### 1.4（编码）

> 打印两人个数的积

```cpp
    #include <iostream>
    int main()
    {
        int var1 = 0, var2 = 0;
        std::cin >> var1 >> var2;
        std::cout << "The product of "
                << var1 << " and " << var2
                << " is " << var1 * var2 << std::endl;
        return 0;
    }

```

输入输出语句是可以换行的，不影响。

### 1.5（编码）

>将上一练习的单个cout语句写成多个

```cpp
#include <iostream>
int main()
{
    int var1 = 0, var2 = 0;
    std::cin >> var1 >> var2;
    std::cout << "The product of ";
    std::cout << var1;
    std::cout << " and ";
    std::cout << var2;
    std::cout << " is ";
    std::cout << var1 * var2 << std::endl;
    return 0;
}
```

效果和1.4是一样的。在这里不能一个`cout`配一个`endl`,显然我们不想换行。

### 1.6（判断）

程序片段是否合法

```cpp
 std::cout << "The product of ";
           << var1 << " and " << var2;
           << " is " << var1 * var2 << std::endl;
```

不合法，因为 << 运算符左侧的运算对象必须是一个`ostream`对象。每行都用分号分开，每行都是新语句。最后两行显然不满足条件。

## 1.3节练习

### 1.7（编码）

> 写一个嵌套注释，观察编译器报错信息

```cpp
/*测试嵌套/*嵌套注释*/*/
int main(){

    return 0;
}
```

g++ 9.3.0 报错信息

```bash
expected unqualified-id before ‘/’ token
```

### 1.8（判断）

语句是否合法

```cpp
std::cout<<"/*"<<std::endl;
std::cout<<"*/"<<std::endl;
std::cout<</* "*/" */<<std::endl;
std::cout<</* "*/" /* "/*" */<<std::endl;
```

1和2毫无疑问的合法。

3 中，前一对`/**/`作为注释，将一个`"`注释掉了。剩下`" */`，显然是非法的，如果在`" */`后再加一个`"`就合法了。

4 中，前一对`/**/`作为注释，将一个` "`注释掉了；后边两个`"`将` /* `包裹了起来，构成一个字符串；前一对`/**/`作为注释，将一个`" `注释掉了。结果就等价于`std::cout<<" /* "<<std::endl;`

## 1.4.1节练习

### 1.9（编码）

> while循环，从50加到100

```cpp
#include <iostream>

int main()
{
    int a = 50;         //起始数
    int sum = 0;        //用来存放和
    while (a <= 100)    //a从50-100开始循环
    {
        sum += a;       //sum=sum+a,每次循环，都给sum加上新的a值
        ++a;            //a=a+1,循环一次，a自增一次
    }
    std::cout << sum << std::endl;  //输出结果
    return 0;
}
```

代码文件见[E1.9.cc](E1.9.cc)

### 1.10（编码）

>循环输出10到0之间的整数

```cpp
#include <iostream>
int main()
{
    int a = 10;             //初始值为10
    while (a >= 0)          //当a还大于0时，执行循环
    {
    std::cout << a << std::endl;    //输出当前的a值
        --a;                //a=a-1,a减小1
    }
    return 0;
}
```

### 1.11（编码）

>输入两个整数A,B输出这两个整数之间的数

这里假设A<B

```cpp
#include <iostream>
int main()
{
    //提示用户输入两个数，先小后大
    std::cout << "input two number(Small first then big): " << std::endl;
    int a, b;
    std::cin >> a >> b;//捕获用户的输入
    while (a <= b)     //当a<=b时执行循环
    {
        std::cout << a << std::endl;    //输出a值
        ++a;           //a=a+1，输出a后a加1；
    }
    return 0;
}
```

## 1.4.2节练习

### 1.12（分析）

> 下面for循环的功能

```cpp
int sum=0;
for(int i=-100;i<=100;++i)
    sum+=i;
```

功能是从-100累加到100，sum最终是0

### 1.13（编码）

>用for循环重做1.4.1节练习

```cpp
//1.9的for循环版本
#include <iostream>

int main()
{
    int sum = 0;                    //用来存放和
    for (int a = 50; a <= 100; ++a) //a从50-100开始循环
        sum += a;                   //sum=sum+a,每次循环，都给sum加上新的a值
    std::cout << sum << std::endl;  //输出结果
    return 0;
}
```

```cpp
//1.10的for循环版本
#include <iostream>
int main()
{
    //初始值为10
    for (int a = 10; a >= 0; --a)    //当a还大于0时，执行循环
        std::cout << a << std::endl; //输出当前的a值
    return 0;
}

```

```cpp
//1.11的for循环版本
#include <iostream>
int main()
{
    //提示用户输入两个数，先小后大
    std::cout << "input two number(Small first then big): " << std::endl;
    int a, b;
    std::cin >> a >> b;              //捕获用户的输入
    for (; a <= b; ++a)              //当a<=b时执行循环
        std::cout << a << std::endl; //输出a值
    return 0;
}
```

### 1.14（概念）

>while循环与for循环的优缺点

for循环自带初始化、循环条件、循环后操作，在结构上很简洁，但是没有while循环在逻辑上好学，适合明确知道循环终止事件的循环（明确知道循环次数）

while循环的变化部分在循环体中，适合没有明确结束要求的循环。（知道结束条件，不管循环次数）

例如下面的练习1.16.也不知道要输入几个数，只知道输入结束符号就停止循环，那么如果用for，需要知道循环次数，显然循环次数是未知的，你在写代码的时候不知道用户会输入多少个数，就不能实现知道要循环几次。while循环巧妙地解决了这个问题。只要输入结束符号就停止。

### 1.15（编码）

>故意犯错，观察相应的编译器错误信息

实际工作中要避免

## 1.4.3节练习

### 1.16（编码）

```cpp
#include <iostream>

int main()
{
    int value = 0, sum = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "The sum of these numbers is " << sum << std::endl;
}
```

输入Ctrl D结束，Windows输入Ctrl Z和回车结束

## 1.4.4节练习

### 1.17（判断）

没有相等的，那每个都是1，都相等，就输出总个数

### 1.18（编码）

效果同1.17
代码文件见[E1.18](E1.18.cc)

### 1.19（编码）

代码文件见[E1.19](E1.19.cc)

## 1.5.1节练习

### 1.20（编码）

```cpp
#include<iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    while(std::cin>>book)
    std::cout<<book<<std::endl;
    return 0;
}

```

### 1.21（编码）

```cpp
#include<iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1,book2;
    std::cin>>book1>>book2;
    std::cout<<book1+book2<<std::endl;
    return 0;
}
```

### 1.22（编码）

```cpp
#include<iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book,sumBook;
    while (std::cin>>book)
        sumBook+=book;
    std::cout<<sumBook<<std::endl;
    return 0;
}
```

## 1.5.2节练习

### 1.23（编码）

>读取多条销售记录，并统计每个ISBN有几条销售记录

思路其实是模仿E1.18，只是比较的条件变成了成员的isbn。

代码文件见[E1.23](E1.23.cc)

### 1.24

从文件中输入记录是一个很好方法。

先将E1.23.cc编译成可执行文件，把一些销售记录放在一个文本文件中，如[data.txt](../data/books.txt)然后运行可执行文件，如下所示

```bash
./a.out < ../data/books.txt
```

输出

```txt
0-201-70353-X occurs 1 times
0-201-82470-1 occurs 1 times
0-201-88954-4 occurs 4 times
0-399-82477-1 occurs 2 times
0-201-78345-X occurs 2 times
```

## 1.6节练习

### 1.25（编码）

代码文件见 [E1.25](E1.25.cc)

>运行本节的书店程序

## 总结

由于不能剧透（假装自己是一个初学者），蓑衣有一些语句写的烦琐了一些。如练习题1.10，直观的写法是上边的写法，先输出，再减1，实际上等价于下边的写法。由于第一章还没有讲到自增自减的具体细节，所以先用直观写法代替。

```cpp
while (a >= 0)
    std::cout << a-- << std::endl;
```

----
我不是以一个完全的初学者的身份开始读《C++ Primer》的，在此之前我已经用C++做过一些项目了，虽然都上不了台面吧，但好歹也能说有一些基础了。正是有了这样的一点点“小骄傲”，开始读《C++ Primer》很容易将前边的基础的部分快速地掠过，导致看的不认真，练习题得过且过。

为了避免自己这样，我就逼自己从开头就认真看，再简单的题也要做。所以就有了前面这么多的超短代码。

事实上，这本书比教材有趣，没有按照传统的从最基础到最难的阶梯型架构，如指针、自定义数据结构（结构体）在第二章就有体现，而表达式在第四章才详细介绍，我觉得这样交叉着非常好。可以将C++语言特性表达得很好，课本在内容编排方面就非常枯燥，越来越难，越来越厌学。《C++ Primer》虽然大体上也是从基础到高级，但是给人一种平和地、自然地过渡。

第一章的练习题相当基础但有内涵。相当多的练习都是“为什么”，每节都有练习，刚好利用刚才学过的新知识来解决问题。另外还有的练习是用这节新学的知识改写前边写过的程序，有时觉得：哇，又要重写，不想写。但是正是这样的推陈出新，才有了更好掌握用法的机会。不要害怕重写，就当作是一次升级过程，更不能理解为浪费时间，你根本无法预测不了现在的举动会对未来造成什么影响。

从一点一滴做起，把小事当成大事干。例如前边的几道，只是简单地执行一下`main()`函数，输出一句`Hello World`，就可以展开很多，比如代码文件的命名和后缀都可以怎么写、输入输出运算的结合顺序，你真的知道`cin`和`cout`是怎么工作的吗？代码虽然简单，但是可以探索的还有很多很多。

踏踏实实，做好眼前的事情。都一个你花时间做了，但做的都是一些“烂尾工程”，或者是半途而废，那才是浪费是时间。做一大批“烂尾工程”，可能也学到了很多，却无法证明自己，也得不到别人的认可。别再说“我自己学到了就行，我问心无愧，不需要别人知道”之类的空话，只有踏踏实实下功夫把东西做出来做好，才是自己真正学会了。

学习的过程是枯燥的。十年寒窗无人问，一举成名天下知。现在的积累过程可能看不到光明，我也怀疑现在从基础开始是不是浪费时间，毕竟面临就业。但是我觉得每天都在学习新的东西，并且纠正也解答了我很多问题，我就觉得这就不是浪费时间。

从一点一滴做起，把小事当成大事干。踏踏实实，做好眼前的事情。
