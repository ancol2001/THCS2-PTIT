#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[105];
	int dem[105]={0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		dem[a[i]]++;
	}
	int tmp=0;
	for (int i = 0; i < n; ++i)
	{
		if (dem[a[i]]>1)
		{
			tmp++;
			dem[a[i]]=0;
		}
	}
	printf("%d\n",tmp );
	for (int i = 0; i < n; ++i)
	{
		if (dem[a[i]]==0)
		{		
			printf("%d ",a[i]);
			dem[a[i]]=2;
		}
	}
}