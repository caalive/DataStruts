/*************************************************************************
	> File Name: struct_2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Nov 2017 10:57:26 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

struct Student
{
    int sid;
    char name[200];
    int age;
};

int main()
{
    struct Student std = {1000, "zhangsan", 20};
    printf("%d %s %d\n", std.sid, std.name, std.age);
    
    struct Student *pst;
    pst = &std;
    pst->sid = 99;
    strcpy(pst->name, "lisi");
    pst->age = 30;
    
    printf("%d %s %d\n", pst->sid, pst->name, pst->age);


    return 0;
}
