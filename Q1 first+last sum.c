#include<stdio.h>
int main(){
	int num,first,last,sum;
	
	// Input number
	printf("Enter the num: ");
	scanf("%d",&num);
	
	// Get last digit 
	last=num%10;
	// Get first digit
	first=num/100; 
	//	sum of first and last digit
	sum=first+last;
	
	// Print output
	printf("\nThe sum of first digit + last digit : %d + %d = %d",first,last,sum);
}

