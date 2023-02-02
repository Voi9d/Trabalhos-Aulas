#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	int i;
	int j;
	int mat1[2][2];
	int mat2[2][2];
	int mat3[2][2];
	int linhaA, colunaA, linhaB, colunaB, x;
	system("color 3");
	printf("Qual das opções abaixo você gostaria: ");
	printf("\n1- Soma das Matrizes");
	printf("\n2- Subtração das Matrizes");
	printf("\n3- Multiplicação das Matrizes\n");
	scanf("%d", &op);
	system("cls");
	switch(op){
		
		case 1:
			system("color 2");
			
			for(i = 0; i<2; i++){
				for(j = 0; j<2; j++){
					printf("\nDigite o valor da linha[%d] coluna[%d] da matriz 1: ", i+1, j+1);
					scanf("%d", &mat1[i][j]);
				}
			}
			
			for(i = 0; i<2; i++){
				for(j = 0; j<2; j++){
					printf("\nDigite o valor da linha[%d] coluna[%d] da matriz 2: ", i+1, j+1);
					scanf("%d", &mat2[i][j]);
				}
			}
			
			for(i = 0; i<2; i++){
				for(j = 0; j<2; j++){
					
					mat3[i][j] = mat1[i][j] + mat2[i][j];
				}
			}
			
			printf("\n\n");
			system("pause");
			system("cls");
			printf("Nova Matriz:\n");
			for(i = 0; i<2; i++){
				for(j = 0; j<2; j++){
					printf("linha[%d] coluna[%d]: %d\n",i+1, j+1, mat3[i][j]);
				}
			}
			break;
		
		case 2:
		
			system("color 5");
			for(i = 0; i < 2; i++){
				for(j = 0; j < 2; j++){
					printf("\nDigite o valor da linha[%d] coluna[%d] da matriz 1: ", i+1, j+1);
					scanf("%d", &mat1[i][j]);
				}
			}
			for(i = 0; i < 2; i++){
				for(j = 0; j < 2; j++){
					printf("\nDigite o valor da linha[%d] coluna[%d] da matriz 2: ", i+1, j+1);
					scanf("%d", &mat2[i][j]);
				}
			}
			for(i = 0; i < 2; i++){
				for(j = 0; j < 2; j++){
					mat3[i][j] = mat1[i][j] - mat2[i][j];
				}
			}
			
			printf("\n\n");
			system("pause");
			system("cls");
			printf("Nova Matriz:\n");
			for(i = 0; i<2; i++){
				for(j = 0; j<2; j++){
					printf("linha[%d] coluna[%d]: %d\n",i+1, j+1, mat3[i][j]);
				}
			}

			break;
			
		case 3:
			system("color 6");
			for(i=0; i<2;i++){
				for(j=0;j<2;j++){
					printf("\nDigite o valor da linha[%d] coluna[%d] da matriz 1: ", i+1, j+1);
					scanf("%d", &mat1[i][j]);
				}
			}
			for(i = 0; i < 2; i++){
				for(j = 0; j < 2; j++){
					printf("\nDigite o valor da linha[%d] coluna[%d] da matriz 2: ",i+1, j+1);
					scanf("%d", &mat2[i][j]);
				}
			}
			for(i = 0; i < 2; i++){
				for(j = 0; j < 2; j++){
						mat3[0][0] = (mat1[0][0] * mat2[0][0]) + (mat1[0][1] * mat2[1][0]);
						mat3[0][1] = (mat1[0][0] * mat2[0][1]) + (mat1[0][1] * mat2[1][1]);
						mat3[1][0] = (mat1[1][0] * mat2[0][0]) + (mat1[1][1] * mat2[1][0]);
						mat3[1][1] = (mat1[1][0] * mat2[0][1]) + (mat1[1][1] * mat2[1][1]);   
					}
				}
			
			//for(i = 0; i < 2; i++){
				//for(j = 0; j < 2; j++){
					//int soma1 = mat3[0][0] + mat3[0][1];
					//int soma2 = mat3[]
				//}
			//}
			
			printf("\n\n");
			system("pause");
			system("cls");
			printf("Nova Matriz:\n");
			for(i = 0; i<2; i++){
				for(j = 0; j<2; j++){
					printf("linha[%d] coluna[%d]: %d\n",i+1, j+1, mat3[i][j]);
				}
			}
				
		return 0;
	}}


