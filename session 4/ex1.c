#include <stdio.h>
int main(){
		int n;
		
		printf("nhap mot so nguyen: ");
		scanf("%d", &n);
		
		if(n>0){
			printf("day la so nguyen duong");
		} else if(n==0){
			printf("day la so khong nguyen duong cung khong nguyen am");
		} else{
			printf("day la so nguyen am");
		}
	return 0;
}
