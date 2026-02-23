#include <stdio.h>

int main(){
	int n,i;
	int arra[10],arrb[10];
	int sum[10];
	int *p1,*p2,*p3;
	
	printf("Enter size of arrays: ");
    scanf("%d",&n);
    
    printf("Enter first arr :\n");
    for(i=0;i<n;i++){
    	printf("arr[%d] : ",i);
    	scanf("%d",&arra[i]);
	}
	
	printf("\nEnter second arr :\n");
    for(i=0;i<n;i++){
    	printf("arr[%d] : ",i);
    	scanf("%d",&arrb[i]);
	}
	
	//
    p1=arra;
    p2=arrb;
    p3=sum;

    for(i=0;i<n;i++){
        *(p3+i)=*(p1+i)+*(p2+i);
    }
    //
	
	printf("first arr:  ");
	for(i=0;i<n;i++){
		printf("%d ",arra[i]);
	}
	printf("\nsecond arr: ");
	for(i=0;i<n;i++){
		printf("%d ",arrb[i]);
	}
	
	//
	printf("\nSum array:    ");
    for(i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
}
