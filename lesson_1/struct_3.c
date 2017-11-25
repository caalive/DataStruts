/*************************************************************************
	> File Name: struct_3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Nov 2017 11:13:21 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

struct Student // 定义一个Student类型的结构体
{
    int sid;
    char name[200];
    int age;
};

void func(struct Student *);  //给结构体赋值, 通过结构体指针
void funcp(struct Student *); //输出结构体的值, 通过结构体指针


nt main()
{
    struct Student std; // 声明一个Student结构体类型的变量 std;
    struct Student *pst; // 声明一个Student结构体类型的指针变量 pst
    
    func(&std);
    printf("%d %s %d\n", std.sid, std.name, std.age);
    
    funcp(&std);
    
    return 0;
}


void func(struct Student *pst)
{
    (*pst).sid = 99;
    strcpy(pst->name, "zhangsan");
    pst->age = 22;
}

void funcp(struct Student *pst)
{
    printf("%d %s %d\n", pst->sid, pst->name, pst->age);
}
