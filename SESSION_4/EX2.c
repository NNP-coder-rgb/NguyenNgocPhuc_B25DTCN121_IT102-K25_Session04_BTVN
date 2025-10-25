#include <stdio.h>

int main (){
	int number;
	printf("Nhap vao so nguyen:");
	scanf("%d",&number);
	if(number % 2==0){
		printf("La so chan");
	}else{
		printf("la so le");
	}
	return 0;
}
