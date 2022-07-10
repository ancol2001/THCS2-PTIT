#include<stdio.h>
#include<math.h>
int UCLN(int x,int y){
	while(x!=y){
		if(x>y) x=x-y;
		else y=y-x;
	}
	return x;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<b;i++){
		for(int j=i+1;j<=b;j++){
			if(UCLN(i,j)==1) printf("(%d,%d)\n",i,j);
		}
	}
	return 0;
}
