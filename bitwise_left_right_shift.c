
#include <stdio.h>


int main()
{
   int out_1,num,n,out_2;
   printf("Enter num1:\n");
   scanf("%d",&num);
   
   printf("Enter number of bits to be shifted:\n");
   scanf("%d",&n)
   
  out_1=num<<n; //left-shifts the bits of num by n-bits
  printf("%d<<%d is : %d",num,n,out_1);

  out_2=num>>n; //right-shifts the bits of num by n-bits
  printf("%d>>%d is : %d",num,n,out_2);
}