#include <stdio.h>

int main(){
	
	int sayi,yedek,toplam=0;
	
	printf("Bir sayi giriniz.\n");
	scanf("%d",&sayi);
	
	yedek=sayi;
	
	while(yedek!=0){
		
		toplam=(toplam*10)+(yedek%10);
		yedek= (yedek-(yedek%10))/10;
	}
	
	if(sayi==toplam)
	{
		printf("Bu bir polinrome sayidir.\n");
	}
	else
	{
		printf("Bu bir polinrome sayi deðildir.\n");
	}
	return 0;
	
}
