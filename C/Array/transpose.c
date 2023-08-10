#include<stdio.h>

int main() {
	int matrix [3][3];
	int i, j; //Variabel untuk mengambil input dari User
	int k, l; //Variabel untuk merubah nilai Matrix menjadi Matrix Transpose
	int x, y; //Variabel Output Matrix hasil dari Input User

	printf("Input Nilai Matrix: ");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);

		}
	}

	for(x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			printf("%d ", matrix[x][y]);
		}
		printf("\n");
	}

	printf("\nTRANSPOSE MATRIX: \n");
	for(k = 0; k < 3; k++){
		for(l = 0; l < 3; l++){
			printf("%d ", matrix[l][k]);
		}
		printf("\n");
	}
	
	return 0;
}
