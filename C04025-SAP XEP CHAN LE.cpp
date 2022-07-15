#include<stdio.h>
#include<math.h>
void sapxep(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1+i; j < n; ++j)
		{
			int tmp;
			if (a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[105], chan[103], le[103];
	int x=0,y=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		{
			chan[x]=a[i];
			x++;
		}else{
			le[y]=a[i];
			y++;
		}
	}
	sapxep(chan,x);
	sapxep(le,y);
	for (int i = 0; i < x; ++i)
	{
		printf("%d ",chan[i] );
	}
	for (int i = 0; i < y; ++i)
	{
		printf("%d ",le[i] );
	}
	return 0;
}