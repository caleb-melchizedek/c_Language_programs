#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[30];
	int roll_no;
};

void display(struct student a[]){
	int i;
	printf("\n Student Name \t \t Student roll_n");
	for(i=0;i<10;i++){
		
		printf("\n \t %s \t \t %d",a[i].name,a[i].roll_no);
	}
}



void edit(struct student a[]){
	int i;
	printf("\n Enter Index of student \t'");
	scanf("%d",&i);
	printf("\n enter new name of student \t");
	scanf("%s",&a[i].name);
	printf(" \n enter new roll_no of student \t");
	scanf("%d",&a[i].roll_no);
	
}


int main(){
	int i;
	int option;
	struct student class[10];
	
	for (i=0;i<10;i++){
		printf("\n Enter name of student %d \t",i);
		scanf("%s",&class[i].name);
		
		printf("\n Enter roll_no of student %d \t",i);
		scanf("%d",&class[i].roll_no);
	}

	while(1==1){
	
	printf("\n Menu");
	printf("\n 1 => Display students");
	printf("\n 2 => Edit student data");
	printf("\n 3 => Exit App.");
	
	printf("\n \n Enter menu option ");
	scanf("%d",&option);
	
	switch(option){
		case 1:{
			display(class);
			break;
		}
		case 2 :{
			edit(class);
			display(class);
			break;
		}
		
		default:{
			printf("\n Choose valid option");
			break;
		}
	}	
		
	}
	
	

}
