#include<stdio.h>
#include<stdlib.h>

void hanoi(int n,char nd1,char nd2,char nd3){
	if(n == 1){
		printf("Move top disk from %c to %c \n",nd1,nd2);
		return;
	}
	hanoi(n-1,nd1,nd3,nd2);
	printf("Move top disk from %c to %c \n",nd1,nd2);
	hanoi(n-1,nd3,nd2,nd1);
}

int main(){
	int no;
	printf("Enter the number of disk to be transferred.");
	scanf("%d",&no);
	if(no<1){
		printf("\n There is nothing to move \n");
	}
	else{
		printf("\n recursion \n");
		hanoi(no,'A','B','C');
	}
	
	return 0;
}
