#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int tong=0;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		tong=tong+a[i];
	}
	printf("%0.3f\n",(double)tong/n);
}