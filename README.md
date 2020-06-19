# SGEMM
Simple C and Halide implementations of the BLAS3 function SGEMM (real single precision general matrix_matrix multiplication).

# Steps:
- Place the folder matrix_mul of this repository in the root directory of the repository [Halide](https://github.com/halide/Halide/tree/master).
- Run the command `cd matrix_mul` in the oot directory of the repository Halide.
- Make sure the compileRun script has execute permissions by running the command `chmod u+x compileRun` in the matrix_mul directory.
- Finally run compileRun script with the command `sh compileRun`.

P.S.: the example implements real single precision matrix-matrix multiplication on 4x4 matrices initialized with the value one. If the script runs correctly the output should be the next:
```
======================
Halide Matrix Multiplication Results
output(0, 0)=4.000000	output(1, 0)=4.000000	output(2, 0)=4.000000	output(3, 0)=4.000000	
output(0, 1)=4.000000	output(1, 1)=4.000000	output(2, 1)=4.000000	output(3, 1)=4.000000	
output(0, 2)=4.000000	output(1, 2)=4.000000	output(2, 2)=4.000000	output(3, 2)=4.000000	
output(0, 3)=4.000000	output(1, 3)=4.000000	output(2, 3)=4.000000	output(3, 3)=4.000000	

Halide Matrix Multiplication with Success

======================
C Matrix Multiplication Results
output(0, 0)=4.000000	output(1, 0)=4.000000	output(2, 0)=4.000000	output(3, 0)=4.000000	
output(0, 1)=4.000000	output(1, 1)=4.000000	output(2, 1)=4.000000	output(3, 1)=4.000000	
output(0, 2)=4.000000	output(1, 2)=4.000000	output(2, 2)=4.000000	output(3, 2)=4.000000	
output(0, 3)=4.000000	output(1, 3)=4.000000	output(2, 3)=4.000000	output(3, 3)=4.000000	

C Matrix Multiplication Completed with Success
```
