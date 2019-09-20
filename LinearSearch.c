#include <stdio.h>;

int main(){
	int i,j,k;
	
	
	int arrA[j];
	int arrB[3][3];
	int arrC[3][3];
	
	printf("Enter array size\n");
	scanf("%d",&j);
	
	for(i=0;i<j;i++){
		 printf("enter element %d of array \n", i);
		 scanf("%d", &arrA[i]);
			 
		 printf("\n %d \n",arrA[i]);
	}
	
	printf("array to search though:\n");
	
	for(i=0;i
	<j;i++){
		printf(" %d \t",arrA[i]);
	}
	
	printf("\n Enter value to search for. \n");
	scanf("%d",&k);
	
	
	
	for(i=0;i<j;i++){
		if(arrA[i]==k) printf("%d was found at index %d\t",k,i);
		
		printf("\n");
	}
	
}
