#include<stdio.h>
#include<math.h>
int a[100];
void nhap(int n)
{
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
}
int snto(int x){
		int dem=0;
		if(x<2) return 1;
		for (int i = 1; i <= sqrt(x); i++)
		{
			if(x%i==0){dem++;}
		}
		if (dem==1)
		{ return 0;
		}else return 1;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		nhap(n);
		for (int i = 0; i < n; ++i)
		{
			if (snto(a[i])==0)
			{
				printf("%d ",a[i] );
			}
		}
		printf("\n");
	}
	return 0;
}