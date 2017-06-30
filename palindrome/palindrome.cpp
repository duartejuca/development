#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char** argv)
{

	int numberOflines;
	string word;
	string word2;

	vector<string> wordsGroup;

	cout << "Set number of words: ";
	cin >> numberOflines;

	for (int i = 0; i < numberOflines; i++) {
		cin >> word;
		wordsGroup.push_back(word);
	}

	for (int i = 0; i < numberOflines; i++) {

		string front = wordsGroup[i];
		reverse(wordsGroup[i].begin(), wordsGroup[i].end());
		string back = wordsGroup[i];

		if (front[0] == back[0])
		{
			cout << front << " is palindrome" << endl;
		}
		else
		{
			cout << front <<  " is not palindrome" << endl;
		}
	}
	return 0;
}
