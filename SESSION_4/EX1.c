#include <stdio.h>

int  main (){
	int number;
	printf("Nhap vao so nguyen n:");
	scanf("%d",&number);
	if(number < 0){
		printf("La so nguyen am");
	}else{
		printf("La so nguyen duong");
	}
	return 0;
}
