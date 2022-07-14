#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		printf("%d",i);
		int x=i,y=2;
		for(int j=2;j<=n;j++){
			if(i==1){
				printf("%d",j);
			}
			if(i>1){
				if(x>1){
					x--;
					printf("%d",x);
				}
				else if(x==1){
					printf("%d",y);
					y++;
				}
			}
		}
		printf("\n");
	}
	return 0;
}