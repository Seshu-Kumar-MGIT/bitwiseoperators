
#include <stdio.h>


int main()
{
   int ans,num1;
   printf("Enter num1:\n");
   scanf("%d",&num1);
   
  ans=(~num1);//it gives the output as 2's Complement of the num1=-(n+1)
  printf("ans : %d",ans);
}