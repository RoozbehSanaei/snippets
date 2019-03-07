// find_if example
#include <iostream>     // cout
#include <algorithm>    // find_if
#include <vector>       // vector
using namespace std;

bool contains_all(vector<int> vec0,vector<int> vec)
{
	bool C = true; 
	for (int i = 0; i < vec.size(); ++i)
	{
		if (find(vec0.begin(), vec0.end(), vec[i]) == vec0.end())
		{
			C = false;
			break;
		}
	}
	return C;
	}


bool IsOdd (int i) {
  return ((i%2)==1);
}

int main () {
  vector<int> myvector;
  vector<int> new_vec;

  myvector.push_back(10);
  myvector.push_back(25);
  myvector.push_back(40);
  myvector.push_back(55);

  new_vec.push_back(10);
  new_vec.push_back(26);

  vector<int>::iterator it = find_if (myvector.begin(), myvector.end(), IsOdd);
  cout << "The first odd value is " << *it << '\n';
  cout << contains_all(myvector,new_vec) << endl;

  return 0;
}