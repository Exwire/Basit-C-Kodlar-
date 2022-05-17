#include <stdio.h>

int main(){
	
	int sabit, ekle=1, i, yedek;
	
	for(sabit = 2; sabit < 7; sabit+=1){
		
		printf("%d ",sabit);
		yedek = sabit;
		
		for(i = 0;i < 4; i++){
			
			yedek += ekle;
			printf("%d ",yedek);	
		
		}
		
		ekle++;
	 printf("\n");
	}
	
	return 0;
}
