#include <stdio.h>;

int main(){
	int i,j,k;
	int l,m;
	
	int arrA[3][3];
	float determinant=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			 printf("enter element %d: %d of array A \n", i,j);
			 scanf("%d", &arrA[i][j]);
			 
			 printf("\n %d \n",arrA[i][j]);
		}
	}
	
	
	
	for(i=0;i<3;i++){
	  determinant = determinant + (arrA[0][i]*(arrA[1][(i+1)%3]*arrA[2][(i+2)%3] - arrA[1][(i+2)%3]*arrA[2][(i+1)%3]));
 	}

 	
   printf("\nInverse of matrix is: \n\n");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++)
           printf("%.2f\t",((arrA[(i+1)%3][(j+1)%3] * arrA[(i+2)%3][(j+2)%3]) - (arrA[(i+1)%3][(j+2)%3]*arrA[(i+2)%3][(j+1)%3]))/ determinant);
       printf("\n");
   }
 
	
	
}
