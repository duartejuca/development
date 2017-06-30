#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

int main(int argc, char** argv)
{

	int listNumbersSize;
	vector<int> listNumbers;
	vector<int> numberToReallocate;
	
	int numberPass;
	cout << "Set number of lines:  " << endl;
	cin >> listNumbersSize;


	cout << "Type the numbers:  " << endl;
	for (int i = 0; i < listNumbersSize; i++ )
	{
		cout << "Line " << i << ":";
		cin >> numberPass;		
		listNumbers.push_back(numberPass);
	}
	
	cout << "\n" << endl;

	sort(listNumbers.begin(), listNumbers.end());

	for (int i = 0; i < listNumbersSize; i++)
	{
		cout << listNumbers.at(i) << endl;
	}		

	return 0;
}

