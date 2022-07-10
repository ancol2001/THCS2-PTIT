#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[105],c[105],l[105];
	int chan=0,le=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		{
			c[chan]=a[i];
			chan++;
		}else{
			l[le]=a[i];
			le++;
		}
	}
	for (int i = 0; i < chan; ++i)
	{
		printf("%d ",c[i]);
	}printf("\n");
	for (int i = 0; i < le; ++i)
	{
		printf("%d ",l[i]);
	}
}