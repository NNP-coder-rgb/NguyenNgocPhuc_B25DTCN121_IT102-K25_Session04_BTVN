#include <stdio.h>
 
int main (){

	int year_of_birth;
	
	printf("Nam sinh: ");
	scanf("%d",&year_of_birth);
	
	float GPA;
	
	printf("Diem trung binh: ");
	scanf("%f",&GPA);
	int hop_le = 1;
	if(year_of_birth < 1900 || year_of_birth > 2025){
		hop_le = 0;
	}
	int age = 2025 - year_of_birth;
	if(age < 18){
		hop_le = 0;
	}
	if(GPA < 0 && GPA >10){
		hop_le = 0;
	}
	const char *Hoc_luc;
	if(GPA < 5.0){
		Hoc_luc = "Yeu";
	}else if(GPA >= 5.0 && GPA < 6.5){
		Hoc_luc = "trung binh";
	}else if(GPA >= 6.5 && GPA < 8.0){
		Hoc_luc = "Kha";
	}else{
		Hoc_luc = "Gioi";
	}

	if(hop_le){
		printf("Nam sinh: %d\n",year_of_birth);
		printf("Tuoi: %d\n",age);
		printf("Hoc luc: %s",Hoc_luc);
	}else{
		printf("Thong tin khong hop le");
	}
	return 0;		
} 
