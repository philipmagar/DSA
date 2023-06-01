//fibonacci series
#include<stdio.h>


int fibonacci(int x){
	if(x == 0){
		return 0;
	}else if(x == 1){
		return 1;
	}else{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}

int main(){
	int a,i;
	printf("Enter the no of element to be displayed.");
	scanf("%d",&a);
	for(i = 0;i < a;i++){
		printf("%d\t",fibonacci(i));
	}
	return 0;
}
