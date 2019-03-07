// A hello world program in C++
	
	#include <iostream>


	using namespace std;



	int* test(int (&A)[2],int B[2], int* C, int D[], int* E)
	{

		A[0] = 3;
		B[0] = 3;
		C[0] = 3;
		D[0] = 3;
		E[0] = 3;

		static int F[2] = {17,2};
		return F;
	}


	int main()
	{

		int A[2] = {1,2};
		int B[2] = {1,2};
		int C[2] = {1,2};
		int D[2] = {1,2};
		int* E = new int[2]{1,2};
		fill(E, E + 2, 0);
		int* F;


		E[30000] = 4;

		
		F = test(A,B,C,D,E);

		cout << A[0]<<endl;
		cout << B[0]<<endl;
		cout << C[0]<<endl;
		cout << D[0]<<endl;
		cout << E[30000]<<endl;
		cout << F[0]<<endl;

		delete[] E;
	}
