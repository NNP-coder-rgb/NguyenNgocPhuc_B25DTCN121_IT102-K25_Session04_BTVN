#include <stdio.h>
 
int main (){
	int number;
	printf("Nhap vao mot so: ");
	scanf("%d",&number);
	if(number % 3==0 && number % 5==0){
		printf("So vua nhap chia het cho ca 3 va 5");
	}else if(number % 3==0){
		printf("So vua nhap chia het cho 3");
	}else if(number % 5==0){
		printf("So vua nhap chia het cho 5");
	}
	return 0;
}
