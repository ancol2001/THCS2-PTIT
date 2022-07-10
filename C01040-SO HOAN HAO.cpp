#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	if (n==6 || n==28 ||n==496 || n==8128||n==33550336||n==8589869056)
	{
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}