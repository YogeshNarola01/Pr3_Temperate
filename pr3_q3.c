/*
Q.3 Write a Program to find the sum of a first and the last digit of a number.
For example,
Input:
Enter any number: 384

Output: 
The sum of the first and the last digit: 7
*/

#include<stdio.h>

main(){
int n,i,digit;

	printf("Enter a number :");
	scanf("%d",&n);
	      i=n%10;
	      while(n>=10){
	      n=n/10;
	      }
	      digit=n;
	      printf("sum of digit is %d",digit+i);

}
