#include <stdio.h>;

int main(){
	int i,j,k;
	int l,m;
	
	int arrA[3][3] ;
	int arrB[3][3];
	int arrC[3][3];
	int sum;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			 printf("enter element %d: %d of array A \n", i,j);
			 scanf("%d", &arrA[i][j]);
			 
			 printf("\n %d \n",arrA[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			 printf("enter element %d: %d of array B \n", i,j);
			 scanf("%d", &arrB[i][j]);
			 
			 printf("\n %d \n",arrB[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
				sum=0;
			for(k=0;k<3;k++){
				sum = sum + arrA[i][k] * arrB[k][j];				
			}
			arrC[i][j] = sum;
		}
	}
	
	for(l=0;l<3;l++){
		for(m=0;m<3;m++){
			printf("%d \t",arrC[l][m]);
		}
		printf("\n");
	}
	
}
