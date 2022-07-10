#include<stdio.h>
#include<math.h>
int snto(int a){
	if(a<2){return 0;}
	else{
		int dem=0;
		for (int j = 1; j <= sqrt(a); j++)
		{
			if(a%j==0){dem++;}
		}
		if (dem==1)
		{
			return 1;
		}
	}
}
int ktra(int x){
	int tmp;
	int s=0;
	while(x>0){
		tmp=x%10;
		x=x/10;
		if(snto(tmp)!=1){
			s=s+1;
		}
	}
	if (s==0)
	{
		return 0;
	}
	else return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		for (int i = a; i <= b; ++i)
		{
			if (snto(i)==1 && ktra(i)==0)
			{
				//printf("%d\n",i );
				dem++;
			}
		}
		printf("%d\n",dem );
	}
}