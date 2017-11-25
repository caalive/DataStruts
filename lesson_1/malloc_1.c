/*************************************************************************
	> File Name: malloc_1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Nov 2017 12:34:08 PM CST
 ************************************************************************/

#include <stdio.h>
#include <malloc.h>

int main()
{
    int a[5] = {4,10,2,8,6};

    int len;
    printf("请输入需要分配的数组长度:len = ");
    scanf("%d", &len);

    int *pArr = (int*)malloc(sizeof(int) * len);
   // *pArr = 4;
   // pArr[1] = 10; 
   // printf("%d %d\n", *pArr, pArr[1]);

    for(int i = 0; i < len; ++i)
        scanf("%d", &pArr[i]);

    for(int i = 0; i < len; ++i)
        printf("%d ", *(pArr+i));
    
    printf("\n");


    free(pArr); // 释放动态分配的内存

    return 0;
}


