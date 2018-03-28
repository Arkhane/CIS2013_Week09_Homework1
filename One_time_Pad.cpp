#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

void LoadFile()
{
	char filename[50];
	char word[50];

	ifstream theFile;

	cout << "Enters a filename level. (ex: level1.txt, level2.txt...)" << endl;
	cin.getline(filename, 50);
	theFile.open(filename);


	if (!theFile.is_open()) {
		cout << "The filename level you enter is not available." << endl;
		cout << "Enters an another filename level. (ex: level1.txt, level2.txt...)" << endl;
		cin.getline(filename, 50);
		theFile.open(filename);
	}


	theFile >> word;
	while (theFile.good()) {
		cout << word << " ";
		theFile >> word;
	}
}

int main() 
{
	LoadFile();

	system("pause");
	return 0;


}

