#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[1000];
		gets(a);
		int check =0, Chan=0, Le=0;
		for(int i = 0 ; i < strlen(a) ; i++ ){
			if(a[i] < 48 || a[i] > 57 || a[0] == '0' ){
				printf("INVALID\n");
				check++;
				break;
			}
			if( (a[i] - '0') % 2 == 0 ) Chan++;
			else Le++;
		}
		if(check == 0){
			if(strlen(a) % 2 == 0 && Chan > Le ){
				printf("YES\n");
			}else if(strlen(a) % 2 != 0 && Chan < Le ){
				printf("YES\n");
			}else printf("NO\n");
		}
	}
	return 0;
}
