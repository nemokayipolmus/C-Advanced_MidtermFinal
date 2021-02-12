#include <stdio.h>

int gcd(int m,int n){

	if(n==m)
		return(m);//if there is a equality we get that
	else
		return(gcd(n,m%n));	
}

int main(void)
{
	int n1,n2;
	
	printf("Enter first number:");//we get 2 integers from users
	scanf(" %d", &n1);
	printf("Enter second number:");
	scanf(" %d", &n2);
	
	printf("GCD of %d and %d is:%d",n1,n2,gcd(n1,n2));
	
	
	
	return(0);
}
