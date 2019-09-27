#include "tlist.h"

int main()
{
	string key = "";
	string user_response = "y";
	string user_response2 = "y";

	tlist myArray;
	cout << endl;
	myArray.Print();

	while (user_response == "y" || user_response == "Y")
	{
		cout << endl << "Enter a string to add: ";
		cin >> key;
		cout << endl << "==============================================" << endl;
		cout << "Insert has been invoked\n";
		cout << "==============================================" << endl;
		myArray.Insert_inorder(key);
		cout << endl;
		myArray.Print();
		cout << endl << "Would you like to add another string? (Y/N)" << endl;
		cin >> user_response;
	}
	
	while (user_response2 == "y" || user_response2 == "Y")
	{
		cout << endl << "Enter a string to remove: ";
		cin >> key;
		myArray.Remove(key);
		cout << endl;
		myArray.Print();
		cout << endl << "Would you like to remove another string? (Y/N)" << endl;
		cin >> user_response2;
	}

	return 0;
}