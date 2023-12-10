/*
Q.2 Write a Program to count the total number of digits in a number.
For example,
Input:
Enter any number: 752

Output: 
Total number of digits: 3
*/
#include<stdio.h>

main(){
int n,count=0;
	printf("Enter a number :");
	scanf("%d",&n);

	      while(n!=0){
	      n=n/10;
	      count++;
	      }

	      printf("Total number of  digit is %d",count);

}
