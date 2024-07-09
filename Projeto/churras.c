#include <stdio.h>

int roundValue(float value);

int main (){
	int homens, mulheres, criancas, hora=4, cerveja, cervejaM, cervejaH, refrigerante;
	float paoDeAlho, linguica_toscana, queijoCoalho, picanha, frango, coracaoDeGalinha, agua, carvao, fardos, carvao_saco;
	float linguica_toscanaC, linguica_toscanaH, linguica_toscanaM, picanhaM, picanhaH, picanhaC, frangoC, frangoM, frangoH, coracaoDeGalinhaH, coracaoDeGalinhaC, coracaoDeGalinhaM, queijoCoalhoM, queijoCoalhoH, queijoCoalhoC, paoDeAlhoM, paoDeAlhoH, paoDeAlhoC;
	
	//coletando a quantidade de presentes no evento
	printf("Insira a quantidade de homens presentes no churrasco:\n");
	scanf("%d", &homens);
	
	printf("\nInsira a quantidade de mulheres presentes no churrasco:\n");
	scanf("%d", &mulheres);
	
	printf("\nInsira a quantidade de criancas presentes no churrasco:\n");
	scanf("%d", &criancas);
	
	//calculando valores dos homens
	frangoH = (homens * 0.250) * hora;
	picanhaH = (homens * 0.250) * hora;
	coracaoDeGalinhaH = (homens * 0.08) * hora;
	linguica_toscanaH = (homens * 0.150) * hora;
	cervejaH = (homens * 4) * hora;
	queijoCoalhoH = (homens * 0.057) * hora;
	paoDeAlhoH = (homens * 0.080) * hora;
	
	//valores mulheres
	frangoM = (mulheres * 0.200) * hora;
	picanhaM = (mulheres * 0.200) * hora;
	coracaoDeGalinhaM = (mulheres * 0.08) * hora;
	linguica_toscanaM = (mulheres * 0.100) * hora;
	cervejaM = (mulheres * 2) * hora;
	queijoCoalhoM = (mulheres * 0.057) * hora;
	paoDeAlhoM = (mulheres * 0.080) * hora;
	
	//valores criancas
	frangoC = (criancas * 0.150) * hora;
	picanhaC = (criancas * 0.150) * hora;
	coracaoDeGalinhaC = (criancas * 0.06) * hora;
	linguica_toscanaC = (criancas * 0.06) * hora;
	queijoCoalhoC = (criancas * 0.057) * hora;
	paoDeAlhoC = (criancas * 0.160) * hora;
	
	//valores finais das carnes
	frango = frangoM + frangoH + frangoC;
	picanha = picanhaM + picanhaH + picanhaC;
	linguica_toscana = linguica_toscanaM + linguica_toscanaH + linguica_toscanaC;
	coracaoDeGalinha = coracaoDeGalinhaH + coracaoDeGalinhaM + coracaoDeGalinhaC;
	
	//valores finais das bebidas e outros
	paoDeAlho = paoDeAlhoM + paoDeAlhoH + paoDeAlhoC;
	queijoCoalho = queijoCoalhoM + queijoCoalhoH + queijoCoalhoC;
	cerveja = cervejaM + cervejaH;
	carvao = (frango + picanha + coracaoDeGalinha + linguica_toscana) * 1.5;
	carvao_saco = carvao / 4;
	fardos = cerveja / 12;
	agua = ((homens + mulheres) * 1.5) + (criancas * 0.5);
	refrigerante = homens + mulheres + criancas;
	
	//lista com as quantidades
	printf("\nNa sua lista de compras deve conter a quantidade proximada de:\n");
	printf("1- %.3fkg de Frango;\n", frango);
	printf("2- %.3fkg de Picanha;\n", picanha);
	printf("3- %.3fkg de Coracao de Galinha;\n", coracaoDeGalinha);
	printf("4- %.3fkg de Linguica Toscana;\n", linguica_toscana);
	printf("5- %d latas de Cerveja ou %d Fardo(s) de Cerveja;\n", cerveja, roundValue(fardos));	
	printf("6- %.1fL de Agua;\n", agua);
	printf("7- %d Garrafa(s) de 2L de Refrigerante;\n", refrigerante);
	printf("8- %.3fkg ou %d de 400g de Queijo Coalho;\n", queijoCoalho, roundValue(queijoCoalho));
	printf("9- %.2fkg ou %d unidade(s) de 400g de Pao de Alho;\n", paoDeAlho, roundValue(paoDeAlho));
	printf("10- %.2fkg de Carvao ou %d de Saco(s) de Carvao de 4kg;\n", carvao, roundValue(carvao_saco));
	
	return 0;
}
	int roundValue(float value){ 
 	return (int)(value + 1);
}
