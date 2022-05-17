#include <stdio.h>

int main(){
	
	int a, deger;
	
	printf("Bir n sayisi giriniz.\n");
	scanf("%d",&a);
	
	for(int i=0;i<=a; i++){
		
		deger = i *i;
	    printf("%d \n",deger);
				
	}


	return 0;	
}
