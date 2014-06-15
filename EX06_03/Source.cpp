#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
	
	string search;
	
	int year;
	cout << "Enter the year from 2001-2010: ";
	cin >> year;
	cout << endl;
	switch (year){
	case 2001:
		ifstream fin;
		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2001.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;
		
		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2002:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2002.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();
		 
	case 2003:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2003.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2004:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2004.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2005:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2005.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2006:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2006.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2007:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2007.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2008:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2008.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2009:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2009.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	case 2010:
		ifstream fin;

		fin.open("C:\\Users\\Ben\\Desktop\\Babynameranking2010.txt");
		if (fin.fail()){
			cout << "file cannot be opened right now for reading.\n";
			return 0;
		}
		char gender;
		cout << "Enter a gender (M) or (F):";
		cin >> gender;

		int rank;
		cout << "Enter a name: ";
		cin >> search;
		bool isFound = 0;
		while (!fin.eof())
		{
			string temp = "";
			getline(fin, temp);
			for (int i = 0; i < search.size(); i++)
			{
				if (temp[i] == search[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
			{
				cout << search << " is ranked # " << rank << " in the year " << year << endl;
				break;
			}
		}

		if (fin.eof() && (!isFound))
		{
			cout << "The name " << search << " is not ranked in the year " << year << "\n";
		}

		fin.close();

	default:
		cout << "That year is not available.\n";
		break;
	}

	return 0;
}