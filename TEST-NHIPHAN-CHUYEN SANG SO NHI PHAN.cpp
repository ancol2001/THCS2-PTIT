/*
Nhập vào số nguyên dương a có không quá 3 chữ số. 
Hãy in biểu diễn dưới dạng nhị phân của số a.
*/
#include<stdio.h>
#include <math.h>
void nhiphan(int n){
	if (n==0) return;
	nhiphan(n/2);
	printf("%d",n%2);
}
int main(){
	int n;
	scanf("%d",&n);
	if (n==0)
	{
		printf("0");
	}
	else nhiphan(n);
	printf("\n");
}
