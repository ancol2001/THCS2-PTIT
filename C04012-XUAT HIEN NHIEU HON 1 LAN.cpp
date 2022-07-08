#include<stdio.h>
int main(){
	int n,a[105],dem[105]={0};
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		dem[a[i]]++;
	}
	for (int i = 0; i < n; ++i)
	{
		if (dem[a[i]]>1)
		{
			printf("%d ",a[i]);
		}
		dem[a[i]]=0;
	}
	return 0;
}