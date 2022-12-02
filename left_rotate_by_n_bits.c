//left rotate

#include<stdio.h>
#define bits sizeof(int)*8-1
int main()
{
    int num,rot;
    printf("enter number:");
    scanf("%d",&num);
    printf("enter no.of bits to be rotate left:");
    scanf("%d",&rot);
    int a=num<<rot;
    int b=num>>(31-rot);
    int c=a|b;
    printf("number after rotation %d",c);
}