// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int input;
    printf("enter decimal number: \t");
    scanf("%d", &input);
   
   printf("The binary form of %d is: \n", input);
   print_bits(input);
    return 0;
}

void print_bits(int number){
    int i=0;
    int binary=0;
    
    while(number>0){
        binary= ((number%2)* pow(10,i))+binary;
        i++;
        number= number/2;
    }
    printf("%d",binary);
    
}
