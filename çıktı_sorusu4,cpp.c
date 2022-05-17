#include <stdio.h>

int main(){
	
	int i, j, yedek;
	
	for(i = 1; i < 6; i++){
		
		yedek = i;
		
		for(j=0; j < i; j++){
			
			printf("%d ",yedek);
			yedek--;
		}
		
		printf("\n");
		
	}
	
	return 0;	
}
