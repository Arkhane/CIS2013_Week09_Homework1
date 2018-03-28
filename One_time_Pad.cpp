#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

char selection(char m)
{
	cout << "Select 'e' as encrypt or 'd' as decrypt" << endl;
	cin >> m;

	switch (m)
	{
	case 'e':
	case 'E': cout << "You have selected to encrypt file..." << endl;
		break;
	case 'd':
	case 'D': cout << "You have selected to decrypt file..." << endl;
		break;
	default: cout << "Invalid entry, please try again...";
		return selection(m);
	}return (m);
}

void LoadFile()
{
	char filename[50];
	char word[50];
	char userInput;

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

	if (theFile.is_open()) {

		selection(userInput);

	}
	theFile >> word;
	while (theFile.good()) {
		cout << word << " ";

	}
}

int main()
{
	LoadFile();

	system("pause");
	return 0;


}

