/**
* Anagram 
* By Joao Manoel Franca Duarte Bongiovani [JM]
* CINQ Test
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool wordEnter(string word1, string word2) 
{
	sort(word1.begin(), word1.end());
	sort(word2.begin(), word2.end());
	return word1.compare(word2);
}

int main(int argc, char** argv)
{
	int size;
	string first[] = { "present", "care", "trees", "begin"};
	string second[] = { "serpent", "race", "reset", "binge" };
	string third[8] = { "slept", "rice", "trap", "panel", "bird", "stone", "arches", "cup" };
	string fourth[8] = { "spelt", "nice", "part", "plane", "dart", "notes", "search", "cop" };

	cout << "4" << " " << endl;
	for (int i = 0; i < 4; i++) { cout << first[i] << " " << second[i] << "\n";	}	
	cout << endl;

	cout << "8" << endl;
	for (int i = 0; i < 8; i++)	{ cout << third[i] << " " << fourth[i] << "\n";	}

	cout << endl;
	cout << "Input: (1 or 2) ";
	cin >> size;
	cout << endl;
	
	bool running = false;
	while (!running) {
		if (size < 1 || size > 2)
		{
			system("cls");
			
			cout << "4" << " " << endl;
			for (int i = 0; i < 4; i++) { cout << first[i] << " " << second[i] << "\n"; }
			cout << endl;

			cout << "8" << endl;
			for (int i = 0; i < 8; i++) { cout << third[i] << " " << fourth[i] << "\n"; }
			
			cout << "Please insert numbers between 1 or 2." << endl;
			cout << "Input: (1 or 2) ";
			cin >> size;
		}
		else
		{
			running = true;
		}
	}

	switch (size)
	{
	case 1:
		system("cls");
		for (int i = 0; i < 4; i++)
		{
			if (wordEnter(first[i], second[i]) == false) 
			{
				cout << first[i] << " is anagram of " << second[i] << endl;
			}
			else
			{
				cout << first[i] << " is not anagram of " << second[i] << endl;
			}
		}
		break;
	case 2:
		system("cls");
		for (int i = 0; i < 8; i++)
		{
			if (wordEnter(third[i], fourth[i]) == false) 
			{
				cout << third[i] << " is anagram of " << fourth[i] << endl;
			}
			else
			{
				cout << third[i] << " is not anagram of " << fourth[i] << endl;
			}
		}
		break;
	}
	cout << endl;
	return 0;
}