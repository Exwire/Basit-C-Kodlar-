#include<stdio.h>

int main(){
	
	int sayi1, sayi2, sayi3;
	
	printf("3 sayi giriniz. \n");
	scanf("%d",sayi1);
	scanf("%d",sayi2);
	scanf("%d",sayi3);
	
	
	if (sayi1>sayi2 && sayi1>sayi3){
		
		printf("En b�y�k say� %d d�r.",sayi1);
		
	}
	else if (sayi2>sayi3){
		
		printf("En b�y�k say� %d dir.",sayi2);
		
	}
	
	else{
		
		printf("En b�y�k say� %d dir.",sayi3);
		
	}
	
	return 0;
	
}
