#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[105];
		int dem[30001]={0};
		int n;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			dem[a[i]]++;
		}
		int max=1;
		for (int i = 0; i < n; ++i)
		{
			if (max <= dem[a[i]])
			{
				max = dem[a[i]];
			}
		}
		// printf("%d\n",max );
		for (int i = 0; i < n; ++i)
		{
			if (dem[a[i]]==max)
			{
				printf("%d ",a[i]);
				dem[a[i]]=0;
			}
		}
		printf("\n");
	}
}