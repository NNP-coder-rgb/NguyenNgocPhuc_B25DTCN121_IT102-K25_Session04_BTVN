#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	
	printf("Nhap so nguyen c:");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a && a > 0 && b > 0 && c > 0){
		printf("La 3 canh cua tam giac");
	}else{
		printf("Khong phai 3 canh cua tam giac");
	}
	return 0;
}

