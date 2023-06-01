//Program to find the GCD using recursion
#include<stdio.h>

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main(){
	int a,b;
	printf("Enter two number.");
	scanf("%d %d",&a,&b);
	int x = gcd(a,b);
	printf("The GCD of %d and %d is %d",a,b,x);
	return 0;
}
