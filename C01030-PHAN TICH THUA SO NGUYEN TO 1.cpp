#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i=2;
		while(n>1){
			if (n%i==0)
			{
				printf("%d ",i);
				n=n/i;
			}else{
				i++;
			}
		}
		printf("\n");
	}
	return 0;
}