/*************************************************************************
	> File Name: point_func.c
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 06:28:52 PM CST
 ************************************************************************/

// 通过被调函数修改主调函数中定义的普通变量值
#include<stdio.h>

void f(int *p) //不是定义了一个叫*p的形参, 而是定义了一个 int *p的指针变量
{
    *p = 100;  
    printf("f()%d\n", *p);
}

int main()
{
    int i = 9;
    f(&i);

    printf("main(i)%d\n", i);
    return 0;
}
