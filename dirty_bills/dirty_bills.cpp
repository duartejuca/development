#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char** argv)
{

	int numberOflines, position;
	int value = 0;
	string state;
	int somatorio = 0;
	
	cout << "Set number of words: ";
	cin >> numberOflines;

	for(int i = 0; i < numberOflines; i++)
	{
		cout << "\nInsert bills condition:";
		cin >> value;
		cin >> state;

		if (state == "dirty")
		{
			somatorio = value + somatorio;
		}
	}
	//system("cls"); // for windows DOS 
	if (numberOflines == 0 || somatorio == 0)
	{
		cout << "\nThere are no dirty bills.\n" << endl;
	}
	else
	{
		cout << "\nThere are " << somatorio << " dirty bills.\n" << endl;
	}
	

	return 0;
}
