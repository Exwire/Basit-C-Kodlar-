#include <stdio.h>

int main(){
	
	int n,i,sum=0;
	
	printf("Bir n sayisi giriniz.\n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i+=2){
		
		sum+=i;
		
	}
	printf("%d",sum);
	return 0;
}
