#include <stdio.h>

int main(){
	int num[5][5];
	int a=0, b=0, c=0, d=0;
	int i, j;
	
	for(j=0; j<5; j++){
		for(i=0; i<5; i++){
			scanf("%i", &num[j][i]);
			
			if(i < j){
				d += num[j][i];
			}else if(i > j){
				c += num[j][i];		
			}
		}
	}
	
	for(j=0; j<5;j++){
		for(i=0; i<5; i++){
		    if(j == 4 && i == 4){
		        break;
		    }
		    if(j == i){	
				a += num[j][i+1];
				b += num[j+1][i];	
			}
		}
	}
	
	printf("\na = %i\nb = %i\nc = %i\nd = %i\n", a, b, c, d);
	
	return 0;
}
