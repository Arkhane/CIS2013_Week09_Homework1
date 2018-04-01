#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>


using namespace std;





void LoadFile()
{
	char filename[100], word[100], encrypt[100], decrypt[100];
	char userInput;
	char menu;
	int i = 0, sum[100];

	ifstream theFile;

	cout << "Enters a filename level. (ex: level1.txt, level2.txt...)" << endl;
	cin.getline(filename, 100);
	theFile.open(filename);



	if (!theFile.is_open())
	{
		cout << "The filename level you enter is not available." << endl;
		cout << "Enters an another filename level. (ex: level1.txt, level2.txt...)" << endl;
		cin.getline(filename, 100);
		theFile.open(filename);
	}

	if (theFile.is_open()) // call file 
	{

		cout << "Select 'e' as encrypt or 'd' as decrypt" << endl;
		cin >> menu;


		if (menu == 'e' || 'E')
		{
			cout << "You have selected to encrypt file..." << endl;
			cout << "Please type in the message..." << endl;
			cin.getline(word, 100);

			for (int i = 0; word[i] <= 27; i++)
			{
				encrypt[i] = sum[i] + word[i]
					cout << encrypt[i] << " " << endl;

			}

			// encrypt % 27



		}
		if (menu == 'd' || 'D')
		{
			cout << "You have selected to encrypt file..." << endl;
		}



	}

}

int main()
{
	LoadFile();

	system("pause");
	return 0;


}

