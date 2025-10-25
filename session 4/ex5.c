#include <stdio.h>
 int main(){
 	int ChiSoCu, ChiSoMoi;
 	int SoDien;
 	
 	printf("Nhap chi so cu: ");
	scanf("%d",&ChiSoCu);
	printf("Nhap chi so moi: ");
	scanf("%d",&ChiSoMoi);
	
	SoDien = ChiSoMoi - ChiSoCu;
	printf("So dien tieu thu: %d kWh\n",SoDien);
	
	if(SoDien>=200){
		printf("gia dien la 30000(VND/kWh)");
	} else if(SoDien>=150){
		printf("gia dien la 25000(VND/kWh)");
	} else if(SoDien>=100){
		printf("gia dien la 20000(VND/kWh)");
	} else if(SoDien>=50){
		printf("gia dien la 15000(VND/kWh)");
	} else{
		printf("gia dien la 10000(VND/kWh)");
	}
	return 0;
	}
