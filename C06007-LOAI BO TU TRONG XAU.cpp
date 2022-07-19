#include <stdio.h> 
#include <string.h> 
void check(char str1[], char str2[]) { 
	int k = strlen(str2), n = strlen(str1), ok = 0;
	int i,j; 
	for (i = 0; i < n; i++) { 
		if (str1[i] == str2[0]) { 
			ok = 0; 
			for (j = 0; j < k; j++) { 
				if (str1[i+j] != str2[j]) {
					ok = 1; 
					break;
				} 
			} 
			if(ok == 0) i+=j; 
		} 
		printf("%c", str1[i]); 
	} 
} 
int main() { 
	char str1[100], str2[100]; 
	gets(str1); 
	gets(str2); 
	check(str1,str2); 
}