#C++面试题
##a.C++与C的差异

#####1.C和C++中struct有什么区别
C没有Protection行为，不能定义函数，但可以有函数指针。  
C++有Protection行为，默认是public(class默认private),可以定义函数。
#####2.C++中的struct和class有什么区别?
struct可以class所有功能，本质上是一个东西,  
struct成员和继承默认是public，  
class成员和继承默认是private
####3.如何判断一个程序是由C编译程序还是由C++编译程序编译的？
判断：检测宏
```
#ifdef__cpluspluc
cout<<"C++";
#else
printf("C");
#endif
```
####4.C和C++有什么不同？

####5.如何处理内存耗尽
判断指针是否为NULL，是则马上return语句终止函数  
判断指针是否为NULL，是则马上用exit(1)终止程序
```
#include big *p;
p=new(std::nothrow) big[1000];
```
---
##b
####1.C++是不是类型安全的？
不是，两个不同类型的指针是可以强制转换的(用reinterpret cast)
####2.const符号常量
如果const位于　*　的左侧，则const就是用来修饰指针所指向的变量，即指针指向为常量；  
如果const位于　*　的右侧，则const就是修饰指针本身，即指针本身是常量。  
(1)const char *p  
p是一个指向const char的指针,p是可以改变指向的，但是p指向的值是不能改变的    
(2)char const *p  
p是一个指向const的char的普通指针  
(3)char * const p的区别  
p是一个指向char的const指针  
####3.用C++写个程序，如何判断一个操作系统是16位、32位？不同sizeof()函数
```
int a=~0;
if(a>65535)
{
    cout<<"32bit"<<endl;
}
else
{
    cout<<"16bit"<<endl;
}
```
####4.数据类型、关键字
(1)void \*(\*(\*fp1)(int))[10];  
fp1是




---
1. asasa

[简书](http://jianshu.com)

姓名|技能|排行
--|:--:|--:
刘备|哭|大哥
关羽|打|二哥
张飞|骂|三弟


```
#include <iostream>
using namespace std;

```
<meta http-equiv="refresh" content="1">