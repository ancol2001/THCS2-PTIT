#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	int d=t;
	while(t--){
		int n;
		int a[103];
		scanf("%d",&n);
		int dem[100003]={0};
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			dem[a[i]]++;
		}
		printf("Test %d:\n",d-t);
		for (int i = 0; i < n; i++)
		{
			if(dem[a[i]]!=0){
				printf("%d xuat hien %d lan\n",a[i],dem[a[i]]);
				dem[a[i]]=0;
			}
		}
		// printf("\n");
	}
}