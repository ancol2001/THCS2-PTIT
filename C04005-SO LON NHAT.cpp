#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[1000];
		int max;
		max=0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
			if(max<=a[i]){
				max=a[i];
			}
		}printf("%d\n",max);
		for (int i = 0; i < n; ++i)
		{
			if (a[i]==max)
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}