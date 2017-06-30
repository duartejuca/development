#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	long long number1 = 0;
	long long number2 = 1, valorInserido;
	long long soma;
	
	cout << "Fibonacci Counter: ";
	cin >> valorInserido;

	for (int i = 0; i < valorInserido; i++)
	{
		soma =  number1 + number2;
		number2 = number1;
		number1 = soma;
	}

	cout << soma << "\n " << endl;

	return 0;
}
