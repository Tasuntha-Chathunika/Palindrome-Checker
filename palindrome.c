#include <stdio.h>
int main() 
{ 

   int N, digit, reverse = 0, temp;   
  
	printf("Enter numbers to find palindrome or not : ") ;
	scanf("%d",&N) ;
	
     temp = N;												temp=121
    
   //loop to find reverse number							
   while(temp != 0)											121!=0				12!=0			1!=0		0!=0
   {
       digit = temp % 10;									digit=1				=2				=1
       reverse = reverse * 10 + digit;						reverse=0*10+1=1	=1*10+2=12		=12*10+1=121
       temp /= 10;											temp=12				=1				=0
   };
  
  
   if (N == reverse)
       printf("%d is Palindrome", N);
   else
       printf("%d is not a Palindrome", N) ;
   temp=12/10 ;
   printf("%d",temp) ;
}
 