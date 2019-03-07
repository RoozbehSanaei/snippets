// A hello world program in C++
	
	#include <iostream>
	#include <array>
	#include <vector>
	#include <math.h>

	using namespace std;

	

	void test(array < array <int, 3 > , 11 >& A, int B[2], int* C, array <int, 3 >& G)
	{
		G[0] = 31;
		A[0][0] = 17;
		B[0] = 32;
		C[0] = 77;
		return ;
	}


	int main()
	{
		int B[2] = {33,46};
		int C[2] = {433,16};

		array < array <int, 3 > , 11 > A; 

		A[0][0] = 7;
		A[1][2] = 2;

		vector< vector<int> > vec(4, vector<int>(4));
		vec[2][3] = 10;
		int a = vec[2][3];

		array <int, 3 > V;
		V[0] = 3;
		
		test(A,B,C,V);

		cout <<  V[0] << endl;
	

	}
