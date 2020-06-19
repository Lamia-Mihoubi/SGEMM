#include <stdio.h>
#include <stdlib.h>

int main(){
	const int m_size = 4;

	float mat_A[m_size][m_size];
	float mat_B[m_size][m_size];
	float output[m_size][m_size];

	// init
	for (int iy = 0; iy < m_size; iy++) {
		for (int ix = 0; ix < m_size; ix++) {
		    mat_A[ix][iy] = 1.0;
		    mat_B[ix][iy] = 1.0;
		    output[ix][iy] = 0.0;
		}
	}
	
	for (int iy = 0; iy < m_size; iy++) {
		for (int ix = 0; ix < m_size; ix++) {
		    for (int k = 0; k < m_size; k++) {
			output[ix][iy] += mat_A[ix][k] * mat_B[k][iy];
		    }
		}
	}
	printf("\n======================\nC Matrix Multiplication Results\n");
	for (int iy = 0; iy < m_size; iy++) {
		for (int ix = 0; ix < m_size; ix++) {
		    printf("output(%d, %d)=%f\t", ix, iy, output[ix][iy]);
		}
		printf("\n");
	}

	printf("\nC Matrix Multiplication Completed with Success\n");
	return 0;
}
