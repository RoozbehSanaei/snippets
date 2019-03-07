	
#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


	int main()
	{



	vector<int> array1,array2;
	array1.push_back(1);
	array1.push_back(2);
	array1.push_back(3);
	cout << array1[2]<<endl;
	array2=array1;
	array2[1]=17;
	cout << array2[1]<<endl;
	cout << array1[1]<<endl;



		return 0;
	}
