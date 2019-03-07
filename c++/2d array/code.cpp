// A hello world program in C++
	
	#include <iostream>


	using namespace std;

	

	int** test(int (&A)[2][2],int B[2][2], int C[][2], int** D)
	{
		A[0][0] = 5;
		B[0][0] = 5;
		C[0][0] = 5;
		D[0][0] = 5;

		int **F;
		F = new int *[2]{new int[2],new int[2]};
		
		F[0][0] = 5;
		F[0][1] = 6;
		F[1][0] = 7;
		F[1][1] = 8;

		return F;
	}


	int main()
	{
		int A[2][2] = {{1,2},{3,4}};
		int B[2][2] = {{1,2},{3,4}};
		int C[][2] = {{1,2},{3,4}};


		int rows =  sizeof A / sizeof A[0]; // 2 rows  
		int cols = sizeof A[0] / sizeof(int); // 5 cols
		cout<<rows<<','<<cols<<endl;

		int **D;
		D = new int *[2]{new int[2],new int[2]};
		
		D[0][0] = 1;
		D[0][1] = 2;
		D[1][0] = 3;
		D[1][1] = 4;
		
		int** F;

		F = test(A,B,C,D);

		cout << A[0][0]<<endl;
		cout << B[0][0]<<endl;
		cout << C[0][0]<<endl;
		cout << D[0][0]<<endl;
		cout << F[0][0]<<endl;



	}
