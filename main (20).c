/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
 int num, lastDigit, digits, sum, i, end;
 printf("Enter upper limit: ");
 scanf("%d", &end);
 printf("Armstrong number between 1 to %d are: \n", end);
 for(i=1; i<=end; i++)
 {
 sum = 0;
 num = i;
 digits = (int) log10(num) + 1;
 while(num > 0)
 {
 lastDigit = num % 10;
 sum = sum + ceil(pow(lastDigit, digits));
 num = num / 10;
 }
 if(i == sum)
 {
 printf("%d, ", i);
 }
 }
 return 0;
}