#include<stdio.h>
#include<math.h>
// void swap(int &a,int &b){
// 	int tmp=a;
// 	a=b;
// 	b=tmp;
// }
int main(){
	int n;
	int a[105];
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
			scanf("%d",&a[i]);
	}
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				// swap(a[i],a[j]);
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
}