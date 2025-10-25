#include<stdio.h>

int main(){
	int NamHienTai = 2025;
	int NamSinh, Tuoi;
	float DiemTrungBinh;
	
	printf("nam sinh: ");
	scanf("%d",&NamSinh);
	printf("diem trung binh: ");
	scanf("%f",&DiemTrungBinh);
	
	if(NamSinh<1900 || NamSinh>NamHienTai){
			printf("Nam sinh khong hop le\n");
	}	else{
			printf("Thong tin sinh vien:\n");
			printf("nam sinh: %d\n",NamSinh);
	}	
	
	Tuoi = NamHienTai - NamSinh;
	
	if(Tuoi >= 18){
			printf("sinh vien da du 18 tuoi\n");
	}	else{
			printf("sinh vien chua du 18 tuoi\n");
	}
	if(DiemTrungBinh<5){
		printf("Hoc luc: yeu");
	}else if(DiemTrungBinh<6.5){
		printf("Hoc luc: trung binh");
	}else if(DiemTrungBinh<8){
		printf("Hoc luc: kha");
	}else{
		printf("hoc luc: gioi");
	}
	 
	 return 0;
} 
