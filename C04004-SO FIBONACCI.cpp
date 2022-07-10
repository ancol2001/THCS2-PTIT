#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a[100];
		a[1]=1;
		a[2]=1;
		for (int i = 3; i <94; i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		int n;
		scanf("%d",&n);
		printf("%lld\n",a[n]);

	}
}
