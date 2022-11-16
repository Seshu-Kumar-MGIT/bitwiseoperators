
#include <stdio.h>


int main()
{
   int ans,num1,num2;
   printf("Enter num1 and num2:\n");
   scanf("%d %d",&num1,&num2);
   
  ans=num1|num2;
  printf("%d|%d is %d",num1,num2,ans);
}