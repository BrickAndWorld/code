#pragma once
template<typename T> void mySwap(T &num1, T &num2);

/*模板的声明和定义放在同一个文件中
  要进行实例化模板函数和类模板，要求编译器在实例化模板时必须在上下文中可以查看到其定义实体；而反过来，在看到实例化模板之前，编译器对模板的定义体是不处理的——原因很简单，编译器怎么会预先知道 typename 实参是什么呢？*/
#include "myMethod.cpp"
