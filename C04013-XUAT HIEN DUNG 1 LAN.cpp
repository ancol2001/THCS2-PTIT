#include<stdio.h>
int main(){
	int n,a[105],dem[105]={0};
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		dem[a[i]]++;
	}
	int tmp=0;
	for (int i = 0; i < n; ++i){
		if(dem[a[i]]==1){
			tmp+=1;
		}
	}
	printf("%d\n",tmp);
	for (int i = 0; i < n; ++i)
	{
		if (dem[a[i]]==1)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}