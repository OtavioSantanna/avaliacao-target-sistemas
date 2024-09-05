#include<stdio.h>
#include<cstring>
#include<stdlib.h>

typedef struct estado{
	char nome[7];
	double faturamento;
	float percentual;
}Estado;

void declararValores(Estado *db);
void calcularPercentual(Estado *db);
void imprimir(Estado *db);

int main(void){
	Estado db[5];
	
	declararValores(db);
	calcularPercentual(db);
	imprimir(db);
	
	return 0;
}
	
void declararValores(Estado *db){
	strcpy(db[0].nome, "SP");
    db[0].faturamento = 67836.43;
	
	strcpy(db[1].nome, "RJ");
	db[1].faturamento = 36678.66;
	
	strcpy(db[2].nome, "MG");
	db[2].faturamento = 29229.88;
	
	strcpy(db[3].nome, "ES");
	db[3].faturamento = 27165.48;
	
	strcpy(db[4].nome, "Outros");
	db[4].faturamento = 27165.53;
}

void calcularPercentual(Estado *db){
	double total = 0.0;
	
	for(int i=0;i<5;i++)	{
		total+=db[i].faturamento;
	}
	
	for(int i=0; i<5; i++){
		db[i].percentual = (db[i].faturamento/total)*100;
	}
}

void imprimir(Estado *db){
	printf("Estado \tFaturamento\tPercentual \n");
	for(int i=0;i<5;i++){
		printf("%s\tR$%.2f\t%.2f%%\n",db[i].nome ,db[i].faturamento,db[i].percentual);
	}
}