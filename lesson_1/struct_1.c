/*************************************************************************
	> File Name: struct_1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Nov 2017 10:47:33 AM CST
 ************************************************************************/

#include <stdio.h>

struct Student
{
   int sid;
   char name[200];
   int age;
};

int main(void)
{

    struct Student std = {1000, "zhangsan", 20};
    printf("%d %s %d\n", std.sid, std.name, std.age);
    return 0;
}

