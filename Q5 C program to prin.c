#include<stdio.h>

int main(){
    int i,j,k;
    int num=10;
	
	// Outer loop controls rows
    for(i=0;i<=4;i++){
    	// Print underscores for left spacing
		for(j=1;j<=i;j++){
			printf("_");
		}
		// Print numbers from (num - i) down to 6
		for(k=num-i;k>=6;k--){
			printf("%d",k);
		}
		printf("\n");
	}
}
