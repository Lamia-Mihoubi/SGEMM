#include "Halide.h"
#include <cstdio>
#include "halide_benchmark.h"

using namespace Halide;
using namespace Halide::Tools;

int main(int argc,char** argv){
	const int m_size = 4;
	ImageParam A(type_of<float>(), 2);
    	ImageParam B(type_of<float>(), 2); 
	Var x("x"), y("y");
	Func matrix_mul("matrix_mul");

	RDom k(0, m_size);
	matrix_mul(x, y) = 0.0f;
    	matrix_mul(x, y) += A(k, y) * B(x, k);

	Buffer<float> mat_A(m_size, m_size);
	Buffer<float> mat_B(m_size, m_size);
	Buffer<float> output(m_size, m_size);

	// init
	for (int iy = 0; iy < m_size; iy++) {
		for (int ix = 0; ix < m_size; ix++) {
		    mat_A(ix, iy) = 1.0f;
		    mat_B(ix, iy) = 1.0f;
		}
	}

	A.set(mat_A);
	B.set(mat_B);

	matrix_mul.realize(output);
	printf("\n======================\nHalide Matrix Multiplication Results\n");
	for (int iy = 0; iy < m_size; iy++) {
		for (int ix = 0; ix < m_size; ix++) {
		    printf("output(%d, %d)=%f\t", ix, iy, output(ix, iy));
		}
		printf("\n");
	}

	printf("\nHalide Matrix Multiplication with Success\n");
	return 0;
}
