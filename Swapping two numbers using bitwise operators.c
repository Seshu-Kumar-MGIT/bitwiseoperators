//Swapping two numbers using bitwise operators
#include<stdio.h>
int main()
{
    int num1,num2;
    
    printf("Enter num1:\n");
    scanf("%d",&num1);
    printf("Enter num2:\n");
    scanf("%d",&num2);
    printf("before swapping %d %d\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    
  
    printf("After swapping %d %d",num1,num2);

}