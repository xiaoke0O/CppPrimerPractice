# 第三章情况介绍

第三章总共45道练习题

## 3.5.3节练习

### 3.34

> p1 += p1-p2; p1 p2指向同一个数组的元素。
> 该表达式功能是啥，啥时候非法

一种非法情况就是p1+(p1-p2)大于数组长度时。

TODO:功能是什么，不是p1指针前进或后退几个位置么？

### 3.35

> 利用指针将数组中的元素置0

### 3.36

> 比较两个数组是否相等
> 比较两个vector是否相等

## 3.5.4节练习

### 3.37

TODO:不满意。
`ca`不以空字符结束，while循环是怎么结束的。

```cpp
//程序是何含义，输出结果是啥
const char ca[]={'h','e','l','l','o'};
const char *cp=ca;
while(*cp){
    cout<<*cp<<endl;
    ++cp;
}
```

ca是一个常量字符数组，并且**没有以空字符结束**，
cp是一个指向常量字符数组`ca`的指针，指向`ca`的第一个元素，不是一个常量指针，所以`++cp`是行得通的。
while语句输出cp指针所指的值，并向后挪动一位，直至遇到空，
输出结果是将ca数组的每个元素输出，每行一个元素。

### 3.38

TODO:不满意

为什么两个指针相加非法且无意义

### 3.39

> 比较两个string对象;比较两个C风格字符串

比较string可以直接用比较运算符比较。

比较两个C风格字符串是`strcmp`函数，`strcmp(p1,p2)`,相等返回0，`p1<p2`返回负值，`p1>p2`返回正值。

### 3.40

TODO:不满意

主旨是C风格字符串的操作`strcpy()`和`strcat()`。

> 定义两个字符数组并用字符串字面量初始化它。新建一个字符串，存放前边定义的两个字符串的连接结果。

```cpp
    const char stringA[]="Hello ";
    const char stringB[]="World!";
    auto ABlen=strlen(stringA)+strlen(stringB);
    char stringC[ABlen]="";
    strcpy(stringC,stringA);
    strcat(stringC,stringB);
```

定义两个字符数组`stringA`和`stringB`,并初始化。
获取总长度用`strlen()`,`strlen()`不统计结尾的`'\0'`，也就是说`ABlen=12`。
定义stringC用于存储结果，大小为12，先初始化空`""`,如果不初始化，默认初始化会令数组含有未定义的值（参见101页）。

<u>现在`strlen(stringC)`是0；</u>

>顺便说一下，如果是`stringC[12]="Hello World!";`这样用字符串字面量初始化字字符数组，数组大小应该大于字符串字面量长度+1，要算上末尾的`"\0"`,像`stringC[12]="Hello World!";`会报错。

`strcpy(stringC,stringA);`将stringA拷贝给stringB;

<u>现在`strlen(stringC)`是6；</u>

`strcat(stringC,stringB);`将stringB附加到stringC后;

<u>现在`strlen(stringC)`是12；</u>

## 练习3.41、2.42

> 主题是整型数组初始化vector和vector拷贝给一个整型数组。

数组初始化vector可以**只指明**数组的首地址和尾后地址。
vector赋值给数组需要遍历vector，逐个赋值。

## 练习3.43、3.44、3.45

> 主题是多维数组`int ia[3][4]`的遍历。考察多维数组遍历的三种方式（范围for、普通for和指针）和循环控制变量的类型

- 对于范围for，循环控制变量的类型是`int[4]`的引用和`int`

```cpp
    for (int (&row)[4] : ia)
        for (int col : row)
            cout << col << " ";
```

-对于普通for，循环控制变量的类型是数组的下标的类型`size_t`,也就是`unsigned long`

```cpp
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
```

- 对于指针。循环控制变量的类型是**指向含有4个整数的数组的指针**和整型指针。可以用begin和end，也可以用指针运算。

```cpp
//用begin和end
    for (int(*p)[4] = begin(ia); p != end(ia); ++p)
        for (int *q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
```

```cpp
//用指针运算
    for (int(*p)[4] = ia; p != ia+3; ++p)
        for (int *q = *p; q != *p+4; ++q)
            cout << *q << " ";
```

- 类型别名，就是为类型取一个好写的名字。如范围for 用类型别名可以这么写

```cpp
    using int4=int[4];
    for (int4 &row : ia)
        for (int col : row)
            cout << col << " ";
```

实际中不用管这么多，直接`auto`就完了，就像练习、3.45那样
