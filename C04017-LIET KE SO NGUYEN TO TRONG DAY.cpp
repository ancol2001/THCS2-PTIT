/* ĐỀ BÀI LỪA VCL số giống nhau vẫn đém ?????
Viết chương trình nhập mảng n (1<n<100) phần tử số nguyên dương. 
Các giá trị trong mảng không quá 1000. 

Đếm các phần tử là số nguyên tố trong mảng và in ra lần lượt 
theo thứ tự xuất hiện.

Input

Dòng 1 ghi số n. Dòng 2 ghi n số của mảng.  

Output

Ghi số lượng các số nguyên tố, 
sau đó lần lượt là các số nguyên tố theo thứ tự xuất hiện.
*/
#include<stdio.h> 
int checkSNT(int x){ 
	if(x<2) return 0; 
	if(x>=2){ 
		for(int i=2;i<x;i++){ 
			if(x%i==0) return 0; 
		} 
		return 1; 
	} 
} 
int main(){ 
	int n,a[100],dem=0; 
	scanf("%d",&n); 
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]); 
		if(checkSNT(a[i])==1){ 
			dem++; 
		} 	
	}  
	printf("%d ",dem); 
	for(int i=0;i<n;i++){ 
		if(checkSNT(a[i])==1){ 
			printf("%d ",a[i]); 
		} 
	} 
	return 0; 
}