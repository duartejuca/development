/**
* FILL List of students and return a list in option
* By Joao Manoel Franca Duarte Bongiovani [JM]
* CINQ Test
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <list>
#include <vector>

using namespace std;

void executeStudentList()
{
	static int inputs, times, queries, position;
	string name1, name2;
	list<string> studentList;

	cout << "Insert numbers of queries: ";
	cin >> queries;

	for(int i = 0; i < queries; i++)
	{
		cout << "\nQueries: " << queries << endl;
		cout << "\nOperation:" << endl;
		cout << "1 - Insert student in the presence list" << endl;
		cout << "2 - Consult student in the presence list in the given position" << endl;
	
		cout << "Inputs Times: " << endl;
		cin >> inputs;	
		cin >> times;

		if (inputs == 1)
		{
			for (int i = 0; i < times; i++)
			{
				cout << "\nInsert student name:";
				cin >> name1;
				cin >> name2;
				studentList.push_back(name1 + " " + name2);
				studentList.sort();
			}
		}
		if (inputs == 2)
		{
			auto stlist = studentList.begin();
			cin >> position;
			advance(stlist, (position - 1));
			cout << "Student: " << *stlist <<  endl;
		}
	} 
}

int main(int argc, char** argv)
{
	executeStudentList();
	return 0;
}