#include<stdio.h>
int main(){
	int number;
	
	printf("nhap mot so nguyen: ");
	scanf("%d",&number);
	
	if(number%3==0 && number%5==0){
		printf("so vua nhap chia het cho ca 3 va 5");
	} else if(number%3==0){
		printf("so vua nhap chia het cho 3");
	} else if(number%5==0){
		printf("so vua nhap chia het cho 5");
	} else{
		printf("so vua nhap khong chia het cho 3 cung khong chia het cho 5");
	}
	return 0;
	}
