#include <stdio.h>

void main() {
	int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
	int temp;
	int size;

	//* calculando o tamanho do array, usando a formula:
	size = sizeof(array) / sizeof(array[0]);
	size--; 
	
	//* loop necessário pois sem ele apenas o maior número iria para o local certo
	for(int I = 0; I < size; I++){

		//* loop que acha o maior número e empurra ele para o final do array
		//* usa J < size - I para economizar em complexidade temporal
		for(int J = 0; J < size - I; J++){
			
			//* caso a linha "size--" não existisse, a variável B tentaria receber um valor em um index inexistente, ocasionando em um erro
			if( array[J]  > array[J + 1]  ){
				temp = array[J];
				array[J] = array[J +1] ;
				array[J+1] = temp;
			}
		}
	}

	//* mostrando resultado
	for(int j = 0; j <= size; j++){
		printf("%d ", array[j]);
	}
	printf("\n");
}