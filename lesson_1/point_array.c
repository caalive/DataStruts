/*************************************************************************
	> File Name: point_array.c
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 07:09:01 PM CST
 ************************************************************************/

#include<stdio.h>

void ShowArry(int *p, int len)
{
    int i;
    for( i=0; i < len; i++)
    {
        printf("%d", *(p++));
    }
}

int main()
{
    int a[5] = {1,2,3,4,5};

    int i = 0;
    for(; i < 5; i++)
    {
        printf("%d ", *(a+i));
    }
    
    ShowArry(a, 5);

    return 0;


}
