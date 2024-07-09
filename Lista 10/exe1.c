#include <stdio.h>

int main(){
	int mat[4][4], mat2[4][4], result[4][4];
	int b, i;
	
	for(b=0; b < 4; b++){
		for(i=0; i < 4; i++){
			scanf("%i", &mat[b][i]);
			scanf("%i", &mat2[b][i]);
			
			if(mat[b][i] > mat2[b][i]){
			    result[b][i] = mat[b][i];
	    	}else{
	    	    result[b][i] = mat2[b][i];
	    	}
		}
		
	}
	
	for(b=0; b < 4; b++){
		for(i=0; i < 4; i++){
			printf("\tMaiores Valores[%i][%i] = %i\n", b, i, result[b][i]);
		}
	}


	
	return 0;
}
