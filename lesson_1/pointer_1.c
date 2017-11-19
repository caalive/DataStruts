/*************************************************************************
	> File Name: pointer_1.c
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 05:12:12 PM CST
 ************************************************************************/

#include <stdio.h>

int main()
{
    int *p;  // p 是个指针变量, int* 表示该p变量只能存储int类型的地址
    int i = 10;
    int j;
    
    p = &i;
    j = *p;  // 等价于 j = i
    //j = *p;
    printf("%d\n", *p);
    
    return 0;
}
