#include<stdio.h>
#include<math.h>
int tong(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if (tong(a)<=tong(b))
	{
		printf("%d %d\n",a,b );
	}
	else printf("%d %d\n",b,a);
}