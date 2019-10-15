#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string line = "";
	string _inputfile = "";
	string _outputfile = "";
	int Modifier = 0;


	cout << "Please input a file you would like to read\n";
	cin >> _inputfile;
	ifstream myfile(_inputfile);
	cout << "Please select your output file\n";
	cin >> _outputfile;



	cout << "Select what modifier you would like to use.\n";
	cout << "0: No Change\n";
	cout << "1: Remove Red\n";
	cout << "2: Remove Green\n";
	cout << "3: Remove Blue\n";
	cout << "4: Negate Red\n";
	cout << "5: Negate Green\n";
	cout << "6: Negate Blue\n";
	cout << "7: Grayscale\n";
	cin >> Modifier;

	if (Modifier <= -1 || Modifier >= 8) {
		cout << "You chose an unacceptable modifier, no change will occur.";
		Modifier = 0;
	}

	int linechecker = 0;
	if (myfile.is_open())
	{

		while (getline(myfile, line))
		{
	
			
				cout << line << '\n';
			

		}
		myfile.close();

	}

	else cout << "Unable to open file";



	return 0;
}