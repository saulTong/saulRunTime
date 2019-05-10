//
//  main.c
//  指针介绍
//
//  Created by GongCF on 2018/9/28.
//  Copyright © 2018年 GongCF. All rights reserved.
//

#include <stdio.h>
int getMax(int i,int j)
{
    return i>j?i:j;
}
int *getMin(int i,int j)
{
    int result = i<j?i:j;
    int *pResult = &result;
    return pResult;
}
int main(int argc, const char * argv[]) {
    /*
     *普通指针
     */
    int a       = 4;
    int *pa     = &a;       //指针赋值
    int **ppa   = &pa;

    printf("a   = %d\n",a);
    printf("pa  = %d\n",*pa);
    printf("ppa = %d\n",**ppa);
    printf("\n");
    printf("&a  = %p\n",&a);
    printf("pa  = %p\n",pa);
    printf("ppa = %p\n",&**ppa);
    printf("\n");
    printf("pa  = %p\n",&pa);
    printf("ppa = %p\n",&*ppa);
    printf("ppa = %p\n",ppa);
    printf("\n");
    printf("ppa = %p\n",&ppa);
    printf("\n");
    
    /*
     *数组指针
     */
    char b[] = "hello,world";
    char *pb = b;
    
    
    printf("b[] = %p\n",&b);
    printf("pb  = %p\n",pb);
    printf("\n");

    //1.查看每个元素的地址
    for (int i = 0; i < sizeof(b) - 1; i++) {
        printf("[%d] = %p - %p\n",i,&b[i], &pb[i]);
        printf("[%d] = %c - %c - %c - %c\n",i, b[i], pb[i], *(b+i), *(pb+i));
    }
    
    /*
     *函数指针
     */
    int (*p1)(int, int);
    p1 = getMax;
    int  result = p1(3,5);
    printf("max=%d\n",result);
    
    /*
     *返回指针的函数
     */
    int *p2 = getMin(3, 5);
    printf("min=%d\n",*p2);
    
    return 0;
}
