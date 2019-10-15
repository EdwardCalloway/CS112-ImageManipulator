#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string line;
	fstream myfile("tinypix.ppm");



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