//BLOOD BANK DONOR MANAGEMENT SYSTEM PROJECT

#include <iostream>
#include <string>
#include <algorithm> // library for searching, sorting

using namespace std;

const int maxrow = 20;

//structures declared globally
struct DonorInfo {
	string name;
	string condition;
	string bloodtype;
	string age;
	string weight;
	string contact;
	string frequency;
	string timesdonated;
};
struct DonorInfo d1;

//STRING PLACE HOLDERS
string DonorName[maxrow] = {};
string Donorbloodtype[maxrow] = {};
string Donorage[maxrow] = {};
string Donorweight[maxrow] = {};
string Donorcontact[maxrow] = {};
string Donorfrequency[maxrow] = {};
string Donortimesdonated[maxrow] = {};
string Donorcondition[maxrow] = {};

//FUNCTIONS

void AddRecord()
{
	cin.ignore();

	cout << "Enter Name (Surname, Given name, M.I). ";
	getline(cin, d1.name);
	cout << "Enter Existing Medical Condition/s. ";
	getline(cin, d1.condition);
	cout << "Enter Bloodtype.";
	getline(cin, d1.bloodtype);
	cout << "Enter age.";
	getline(cin, d1.age);
	cout << "Enter weight (kg).";
	getline(cin, d1.weight);
	cout << "Enter contact.";
	getline(cin, d1.contact);
	cout << "Enter your last blood donation.";
	getline(cin, d1.frequency);
	cout << "Enter number of times donated.";
	getline(cin, d1.timesdonated);

	for (int x = 0; x < maxrow; x++)
	{
		if (DonorName[x] == "\0")
		{
			DonorName[x] = d1.name;
			Donorcondition[x] = d1.condition;
			Donorbloodtype[x] = d1.bloodtype;
			Donorage[x] = d1.age;
			Donorweight[x] = d1.weight;
			Donorcontact[x] = d1.contact;
			Donorfrequency[x] = d1.frequency;
			Donortimesdonated[x] = d1.timesdonated;
			break;
		}
	}
}
void PrintRecord()
{
	system("CLS");
	cout << "============================================================================================================================================================" << endl;
	cout << "DONOR RECORD(s)" << endl;
	cout << "============================================================================================================================================================" << endl;

	int counter = 0;
	for (int x = 0; x < maxrow; x++)
	{
		if (DonorName[x] != "\0")
		{
			counter++;
			cout << "\n";
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\t\t\t\t\t\t\t\tDONOR BLOODTYPE: " << Donorbloodtype[x] << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			cout << "Donor name:\t\t\t\t " << DonorName[x] << endl;
			cout << "Donor medical condition/s:\t\t " << Donorcondition[x] << endl;
			cout << "Donor age:\t\t\t\t " << Donorage[x] << endl;
			cout << "Donor weight(kg):\t\t\t " << Donorweight[x] << endl;
			cout << "Donor contact#:\t\t\t\t " << Donorcontact[x] << endl;
			cout << "Donation frequency:\t\t\t " << Donorfrequency[x] << endl;
			cout << "Number of Times donated:\t\t " << Donortimesdonated[x] << endl;
			cout << "\n";
		}

	}

	if (counter == 0)
	{
		cout << "No Record found!" << endl;
	}

	cout << "============================================================================================================================================================" << endl;
}

void DisplayAlphaRecord()
{

	int i, j;
	for (i = 0; i < maxrow - 1; i++)
	{
		// Last i elements are already sorted
		for (j = 0; j < maxrow - i - 1; j++)
		{
			// Compare names and swap if necessary
			if (DonorName[j] > DonorName[j + 1])
			{
				string temp = DonorName[j];
				DonorName[j] = DonorName[j + 1];
				DonorName[j + 1] = temp;

				temp = Donorcondition[j];
				Donorcondition[j] = Donorcondition[j + 1];
				Donorcondition[j + 1] = temp;

				temp = Donorbloodtype[j];
				Donorbloodtype[j] = Donorbloodtype[j + 1];
				Donorbloodtype[j + 1] = temp;

				temp = Donorage[j];
				Donorage[j] = Donorage[j + 1];
				Donorage[j + 1] = temp;

				temp = Donorweight[j];
				Donorweight[j] = Donorweight[j + 1];
				Donorweight[j + 1] = temp;

				temp = Donorcontact[j];
				Donorcontact[j] = Donorcontact[j + 1];
				Donorcontact[j + 1] = temp;

				temp = Donorfrequency[j];
				Donorfrequency[j] = Donorfrequency[j + 1];
				Donorfrequency[j + 1] = temp;

				temp = Donortimesdonated[j];
				Donortimesdonated[j] = Donortimesdonated[j + 1];
				Donortimesdonated[j + 1] = temp;
			}
		}
	}
	system("CLS");
	cout << "============================================================================================================================================================" << endl;
	cout << "SORTED DONOR RECORD(s)" << endl;
	cout << "============================================================================================================================================================" << endl;

	int counter = 0;
	for (int x = 0; x < maxrow; x++)
	{
		if (DonorName[x] != "\0")
		{
			counter++;
			cout << "\n";
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\t\t\t\t\t\t\t\tDONOR BLOODTYPE: " << Donorbloodtype[x] << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			cout << "Donor name:\t\t\t\t " << DonorName[x] << endl;
			cout << "Donor medical condition/s:\t\t " << Donorcondition[x] << endl;
			cout << "Donor age:\t\t\t\t " << Donorage[x] << endl;
			cout << "Donor weight(kg):\t\t\t " << Donorweight[x] << endl;
			cout << "Donor contact#:\t\t\t\t " << Donorcontact[x] << endl;
			cout << "Donation frequency:\t\t\t " << Donorfrequency[x] << endl;
			cout << "Number of Times donated:\t\t " << Donortimesdonated[x] << endl;
			cout << "\n";

		}

	}

	if (counter == 0)
	{
		cout << "No Record found!" << endl;
	}

	cout << "============================================================================================================================================================" << endl;
}

void SearchRecord(string search)
{
	system("CLS");
	cout << "============================================================================================================================================================" << endl;
	cout << "SEARCHED DONOR RECORD(s)" << endl;
	cout << "============================================================================================================================================================" << endl;

	int counter = 0;
	for (int x = 0; x < maxrow; x++)
	{

		if (DonorName[x] == search)
		{
			counter++;
			cout << "\n";
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\t\t\t\t\t\t\t\tDONOR BLOODTYPE: " << Donorbloodtype[x] << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

			cout << "Donor name:\t\t\t\t " << DonorName[x] << endl;
			cout << "Donor medical condition/s:\t\t " << Donorcondition[x] << endl;
			cout << "Donor age:\t\t\t\t " << Donorage[x] << endl;
			cout << "Donor weight(kg):\t\t\t " << Donorweight[x] << endl;
			cout << "Donor contact#:\t\t\t\t " << Donorcontact[x] << endl;
			cout << "Donation frequency:\t\t\t " << Donorfrequency[x] << endl;
			cout << "Number of Times donated:\t\t " << Donortimesdonated[x] << endl;
			cout << "\n";
			break;
		}

	}

	if (counter == 0)
	{
		cout << "No Record found!" << endl;
	}

	cout << "============================================================================================================================================================" << endl;

}

void UpdateRecord(string search)
{

	int counter = 0;

	for (int x = 0; x < maxrow; x++)
	{
		if (DonorName[x] == search)
		{
			counter++;

			cout << "Enter Name (Surname, Given name, M.I). ";
			getline(cin, d1.name);
			cout << "Enter Existing Medical Condition/s. ";
			getline(cin, d1.condition);
			cout << "Enter Bloodtype.";
			getline(cin, d1.bloodtype);
			cout << "Enter age.";
			getline(cin, d1.age);
			cout << "Enter weight(kg).";
			getline(cin, d1.weight);
			cout << "Enter contact.";
			getline(cin, d1.contact);
			cout << "Enter last blood donation.";
			getline(cin, d1.frequency);
			cout << "Enter number of times donated.";
			getline(cin, d1.timesdonated);


			DonorName[x] = d1.name;
			Donorcondition[x] = d1.condition;
			Donorbloodtype[x] = d1.bloodtype;
			Donorage[x] = d1.age;
			Donorweight[x] = d1.weight;
			Donorcontact[x] = d1.contact;
			Donorfrequency[x] = d1.frequency;
			Donortimesdonated[x] = d1.timesdonated;

			cout << "Update Successfull!" << endl;
			break;
		}

	}
	if (counter == 0)
	{
		cout << "No Record found! " << endl;
	}
}
void DeleteRecord(string search)
{
	int counter = 0;
	for (int x = 0; x < maxrow; x++)
	{
		if (DonorName[x] == search)
		{
			counter++;

			DonorName[x] = "";
			Donorcondition[x] = "";
			Donorbloodtype[x] = "";
			Donorage[x] = "";
			Donorweight[x] = "";
			Donorcontact[x] = "";
			Donorfrequency[x] = "";
			Donortimesdonated[x] = "";

			cout << "Successfully Deleted!" << endl;
			break;
		}
	}
	if (counter == 0)
	{
		cout << "No Record found!";
	}
}

int main()
{
	cout << "Menu\n";
	char option;
	string Donorname;
	system("CLS");

mainmenu:
	cout << "============================================================================================================================================================" << endl;
	cout << "\n ";
	cout << "\t\t\t\t\t\t\t WELCOME TO BLOOD DONATION BANK MANAGEMENT SYSTEM\n";
	cout << "\t\t\t\t\t\t\t   Where your life is our utmost priority\n";
	cout << "\n ";
	cout << "==========================================================================================================================================================" << endl;


	do {
		cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << "===========================================================================================================================================================" << endl;
		cout << "Type the corresponding number that you wish to proceed:\n " << endl;
		cout << "[1]-Add/insert Donor Records" << endl;
		cout << "[2]-Update Donor Records" << endl;
		cout << "[3]-Delete Donor Records" << endl;
		cout << "[4]-Search Donor Records" << endl;
		cout << "[5]-Print Donor Records" << endl;
		cout << "[6]-Sort Donor Records (Alpha Order)" << endl;
		cout << "[7]-Exit Program" << endl;
		cout << "===========================================================================================================================================================" << endl;
		cout << "Select Option >>";
		cin >> option;

		switch (option)
		{
		case '1':AddRecord();
			system("CLS");
			break;

		case '2':
			cin.ignore();
			cout << "Search by name >>";
			getline(cin, Donorname);
			UpdateRecord(Donorname);
			break;

		case '3':
			cin.ignore();
			cout << "Delete by name >>";
			getline(cin, Donorname);
			DeleteRecord(Donorname);
			cin.ignore();
			system("CLS");
			break;

		case '4':
			cin.ignore();
			cout << "Search by name >>";
			getline(cin, Donorname);
			SearchRecord(Donorname);
			break;

		case '5':
			PrintRecord();
			break;

		case '6':
			DisplayAlphaRecord();
			break;

		case '7':
			exit(0);

		default:

			system("cls");
			goto mainmenu;
		}
	} while (true);
	return 0;
}
