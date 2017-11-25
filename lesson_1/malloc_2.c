/*************************************************************************
	> File Name: malloc_2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Nov 2017 12:58:09 PM CST
 ************************************************************************/
 
#include <stdio.h>
#include <malloc.h>

struct Student
{
    int sid;
    int age;
};


struct Student * CreateStudent(void)
{
    struct Student *p = (struct Student *)malloc(sizeof(struct Student));
    return p;
}

void ShowStudent(struct Student*pst)
{
    printf("%d %d\n", pst->sid, pst->age);
}


int main()
{
    struct Student *ps;
    
    ps = CreateStudent();
    ps->sid = 100;
    ps->age = 99;
    ShowStudent(ps);
    
    free(ps);

    return 0;
}

