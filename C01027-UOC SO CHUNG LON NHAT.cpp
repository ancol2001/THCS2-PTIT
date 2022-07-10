#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int a,b;
	scanf("%d%d",&a,&b);
	int tmp=a;
	if (a<=b)
	{
		tmp=a;
	}else{
		tmp=b;
	}
	for (int i = tmp; i>=1; i--)
	{
		if (a%i==0 && b%i==0)
		{
			printf("%d\n",i );
			break;
		}
	}

	}
}