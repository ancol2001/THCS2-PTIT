#include<stdio.h>
int main(){
	int n,a[105];
	scanf("%d",&n);
	int dem[100]={0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		dem[a[i]]++;

	}
	for (int i = 0; i < n; ++i)
	{
		if(dem[a[i]]!=0){
		printf("%d %d\n",a[i],dem[a[i]]);}
		dem[a[i]]=0;
	}
	return 0;
}