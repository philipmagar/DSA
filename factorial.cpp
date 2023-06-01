//Program to find the factorial using recursion
#include<stdio.h>
#include<conio.h>

int factorial(int x){
	if(x == 0 || x == 1){
		return 1;
	}else{
		return x*factorial(x-1);
	}
}

int main(){
	int a;
	printf("Enter the number.");
	scanf("%d",&a);
	int x = factorial(a);
	printf("The factorial of %d is %d",a,x);
	return 0;
}
