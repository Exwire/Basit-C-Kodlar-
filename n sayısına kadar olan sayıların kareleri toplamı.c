#include <stdio.h>

int main(){
	
	int a, sum=0, deger;
	
	printf("Bir n sayisi giriniz.\n");
	scanf("%d",&a);
	
	for(int i=0;i<a; i++){
		
		deger = i *i;
		sum += deger;
				
	}

	printf("%d \n",sum);
	return 0;	
}
