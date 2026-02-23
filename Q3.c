#include <stdio.h>

int main(){
	int n;
	
	// Input number from user
	printf("Enter a number : ");
	scanf("%d",&n);
	
	// Check if number is divisible by both 3 and 5
	if(n%3==0 && n%5==0){
		printf("Number %d is divisible by both 3 and 5.\n",n);
	}
	else{
		printf("Number %d is not divisible by both 3 and 5.\n",n);
	}
}
