#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(int argc, char** argv)
{

	int stairs;
	bool inputCheck;

	while (!inputCheck)
	{
		inputCheck = true;
		cout << "Set number of stairs: ";
		cin >> stairs;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "Error" << endl;
			inputCheck = false;
		}
	}
	int  down, emptyspace;
	int up = 1;
	down = stairs - 1;
	for (int i = 0; i < stairs; i++) {
		emptyspace = down;
		for (int j = 0; j < emptyspace; j++) 
		{ 
			cout << " "; 
		} 
		for (int m = 0; m < up; m++)
		{ 
			cout << "#"; 
		}
		cout << endl;
		down--;
		up++;
	}
	return 0;
}
