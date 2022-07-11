#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
void xuLy(){ 
	char s[205]; 
	gets(s); 
	int dem = 0; 
	for(int i=0;i<strlen(s)-1;i++) 
		if(s[i]==' '&&s[i+1]!=' ') dem++; 
	printf("%d\n", dem+1); 
} 
int main() { 
	int t; 
	scanf("%d", &t); 
	getchar(); 
	while(t--) 
		xuLy(); 
}