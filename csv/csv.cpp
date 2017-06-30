#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

int main(int argc, char** argv)
{

	//writeFile();
	//readFile();
	
	int numberOfLines;
	string xenterData[6][30];
	FILE *fileRecord;
	char *texto[5][60];
	
	fileRecord = fopen("test/example.txt", "w");
	
	cout << "\nNumber of lines: ";

	cin >> numberOfLines;
	for (int i = 0; i < numberOfLines; i++)
	{
		cout << "\nInsert persona information: ";
		for(int j = 0; j < 5; j++)
		{
			//fgets(texto[i], 256, stdin);
			cin >> *xenterData[j];
			if (j == 4)
			{
				fprintf(fileRecord, "%s\n", &xenterData[j]);
			}
			else
			{
				fprintf(fileRecord, "%s ", &xenterData[j]);
			}
		}
	}
	
	rewind(fileRecord);
	
	for (int i = 0; i < numberOfLines; i++)
	{
		rewind(fileRecord);
		for (int j = 0; j < 5; j++)
		{
			fscanf(fileRecord, "%s", &xenterData[j]);
		}
		printf("%s %s is %d years old and lives in %s %s" , &xenterData[0], &xenterData[1], &xenterData[4], &xenterData[3], &xenterData[2]);
		cout << "\n";
		
	}
	
	fclose(fileRecord);
	
	return 0;
}

