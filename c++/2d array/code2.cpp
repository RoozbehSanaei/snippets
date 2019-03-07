	
#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void func1(int A[2][2])
{
	cout << A[0][0] << ",";
	cout << A[0][1] << ",";
	cout << A[1][0] << ",";
	cout << A[1][1] << endl;
}


void func2(const int (&A)[2][2])
{
	cout << A[0][0] << ",";
	cout << A[0][1] << ",";
	cout << A[1][0] << ",";
	cout << A[1][1] << endl;
}


using namespace std;


	int main()
	{

	int A[2][2] = { 
		{12,23},
		{34,45}};

	int rows =  sizeof A / sizeof A[0]; // 2 rows  
	int cols = sizeof A[0] / sizeof(int); // 5 cols

	cout<<rows<<','<<cols<<endl;

	func1(A);
	func2(A);



		return 0;
	}
