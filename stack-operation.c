//Write a menu driven program to perform stack operation using array
#include<stdio.h>
#include<conio.h>

#define SIZE 10

int stack[SIZE],top,n,choice,x,i;

void push();
void pop();
void display();

int main(){
	
	top = -1;
	printf("\n Enter the size of STACK : ");
	scanf("%d",&n);
	printf("\n STACK IMPLETATION USING ARRAY\n");
	do{
		printf("\n1. PUSH\n2. POP \n3. DISPLAY\n4.EXIT\n");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("\n Invalid choice\n");
		}
	}while(choice != 4);
	
	getch();
	
	return 0;
}

void push(){
	if(top >= n-1){
		printf("\n STACK OVERFLOW\n");
	}else{
		printf("ENter a value to be pushed : ");
		scanf("%d",&x);
		top++;
		stack[top] = x;
	}
}

void pop(){
	if(top <= -1){
		printf("\n STACK UNDERFLOW\n");
	}else{
		printf("\n The pooped element is %d",stack[top]);
		top--;
	}
}

void display(){
	if(top >= 0){
		printf("\n Elements in the stack \n \n");
		for(i = top; i >= 0; i--){
			printf("%d\t",stack[i]);
		}
	}else{
		printf("\n Empty stack");
	}
}
