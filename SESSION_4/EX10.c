#include <stdio.h>

int main (){
	int a, b, c;
	printf("Nhap so a:");
	scanf("%d",&a);
	
	printf("Nhap so b:");
	scanf("%d",&b);
	
	printf("Nhap so c:");
	scanf("%d",&c);
	if(a>b){
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	else if(a>c){
		int temp;
		temp = a;
		a = c;
		c= temp;
	}
	else if(b>c){
		int temp;
		temp = b;
		b = c;
		c = temp;
	}
	printf("Thu tu tang dan la: %d %d %d",a,b,c);
	return 0;
}
