//Decimal to binary

#include<stdio.h>
int main()
{
    int num,arr[31];
    int i=31;
    printf("Enter num1:\n");
    scanf("%d",&num);
    while(i>=0)
    {
        arr[i]=num&1;//to store lsb of the numbers
        i--;
        num=num>>1;
    }
    for(int i=0;i<=31;i++)
        printf("%d",arr[i]);
}