/*
Cho một dãy các số nguyên dương không quá 9 chữ số, mỗi số cách 
nhau vài khoảng trống, có thể xuống dòng. 
Hãy tìm các số không giảm (các chữ số theo thứ tự từ trái qua phải
tạo thành dãy không giảm) và đếm số lần xuất hiện của các số đó.

Input: Gồm các số nguyên dương không quá 9 chữ số. 
Không quá 100000 số.

Kết quả Ghi ra các số không giảm kèm theo số lần xuất hiện. 
Các số được liệt kê theo thứ tự sắp xếp số lần xuất hiện giảm dần.
*/
#include<stdio.h>
#include<math.h>
int check(int a){
	while(a>=0){
		int tmp=a%10;
		a=a/10;
		if (tmp<a%10)
		{
			return 0;
		}
		if (a==0)
		{
			return 1;
		}
	}
}
int main(){
	int a[100005];
	int i=0;
	int dem[10001]={0};
	while((scanf("%d",&a[i]))!= -1){
		if(check(a[i])==1){
			dem[a[i]]++;
		}
		i++;
	}
	for (int j = 0; j < i; ++j)
	{
		if (dem[a[j]]>=1)
		{
			printf("%d ", a[j]);
		}
	}
	return 0;
}