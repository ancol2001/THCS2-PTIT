#include<stdio.h> 
#include<math.h> 
int a[105];
void nhap(int n){
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
} 
int main() { 
	int t; 
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d",&n);
		nhap(n);
		int ok=0;
		for (int i = 0; i < n/2; ++i)
		{
			if (a[i]!=a[n-i-1])
			{
				ok++;
			}
		}
		if (ok==0)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	} 
	return 0; 
} 