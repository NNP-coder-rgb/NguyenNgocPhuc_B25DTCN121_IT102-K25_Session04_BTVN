#include <stdio.h>

int main(){
	float chi_so_cu, chi_so_moi;
	printf("Nhap chi so dien cu: ");
	scanf("%f",&chi_so_cu);
	
	printf("Nhap chi so dien moi: ");
	scanf("%f",&chi_so_moi);
	
	float so_dien, so_tien;
	so_dien = chi_so_moi - chi_so_cu;
	if(so_dien < 0){
		printf("Loi: chi so moi phai lon hon chi so cu\n");
	}else
		printf("So dien ho gia dinh su dung trong thang la: %.0fKwh\n",so_dien);
	if(so_dien>= 0 && so_dien < 50){
		so_tien = so_dien * 10000;
		printf("So tien dien thang do gia dinh phai tra la: %.0f VND",so_tien);
	}else if(so_dien >= 50 && so_dien < 100){
		so_tien = 50*10000 + (so_dien - 50) * 15000;
		printf("So tien dien thang do gia dinh phai tra la: %.0f VND",so_tien);
	}else if(so_dien >=100 && so_dien <150){
		so_tien = 50*10000 + 50*15000 + (so_dien - 100) * 20000;
		printf("So tien dien thang do gia dinh phai tra la: %.0f VND",so_tien);
	}else if(so_dien >= 150 && so_dien <200){
		so_tien = 50*10000 + 50*15000 + 50*20000 + (so_dien - 150)*25000;
		printf("So tien dien thang do gia dinh phai tra la: %.0f VND",so_tien);
	}else if(so_dien>=200){
		so_tien = 50*10000 + 50*15000 + 50*20000 + 50*25000 + (so_dien - 200)*30000;
		printf("So tien dien thang do gia dinh phai tra la: %.0f VND",so_tien);
	}
	return 0; 
}
