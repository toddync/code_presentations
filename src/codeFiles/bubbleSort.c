#include <stdio.h>

void main() {
	int array[] = {8, 4, 2, 6, 9, 0, 3, 1, 5, 7};
	int size = sizeof(array) / sizeof(array[0]) -1,
		temp;

	//* loop necessário pois sem ele apenas o maior número iria para o local certo
	for(int I = 0; I < size; I++){
		//* loop que acha o maior número e empurra ele para o final do array
		//* usa J < size - I para economizar em complexidade temporal
		for(int J = 0; J < size - I; J++){
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
}