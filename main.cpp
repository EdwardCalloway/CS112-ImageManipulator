#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string line;
	string _inputfile = "";
	string _outputfile = "";
	cout << "Please input a file you would like to read\n";
	cin >> _inputfile;
	ifstream myfile(_inputfile);
	cout << "Please select your output file\n";
	cin >> _outputfile;





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