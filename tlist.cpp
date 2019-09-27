#include "tlist.h"

/*this is an example of a default constructor*/
tlist::tlist()
{
	cout << "Defualt constructor has been invoked \n";
	count = 0;
	capacity = 12;
	DB = new string[capacity];
	int i = 0;
	ifstream in;
	in.open("myData.txt");

	while (!in.eof())
	{
		in >> DB[i];
		//Insert(i);
		Insert_inorder(DB[i]);
		i++;
	}
	in.close();
}

tlist::~tlist()
{
	cout << "==============================================" << endl;
	cout << "Destructor has been invoked\n";
	cout << "==============================================" << endl;
	delete[] DB;
}

void tlist::Insert(string & add)
{
	cout << "==============================================" << endl;
	cout << "Insert has been invoked\n";
	cout << "==============================================" << endl;
	if (!Is_Full())
	{
		DB[count] = add;
		count++;
	}
	else { cout << "The array is full\n"; }

	Print();
}

void tlist::Insert_inorder(string  s)
{

	int loc;

	if (count < capacity)
	{
		for (loc = 0; loc < count; loc++)
		{
			if (s <= DB[loc])
			{
				break;
			}
		}

		if (loc < count)
		{
			for (int p = count; p > loc; p--)
			{
				DB[p] = DB[p - 1];
			}
			DB[loc] = s;
			count++;
		}
		else
		{
			DB[count] = s;
			count++;
		}
	}
	else
	{
		cout << "The array is full\n";
	}
	
}


void tlist::Print()
{
	cout << "==============================================" << endl;
	cout << "Print has been Invoked\n";
	cout << "==============================================" << endl << endl;
	for (int i = 0; i<count; i++)
	{
		cout << "DB[ " << i << " ] = " << DB[i] << endl;
	}
}

int tlist::Search(const string & key)
{
	cout << "==============================================" << endl;
	cout << "Search has been invoked \n";
	cout << "==============================================" << endl;
	for (int i = 0; i<count; i++)
	{
		if (DB[i] == key)
		{
			cout << "Item Found" << endl;
			return i;
		}
		else { cout << "Item Not Found" << endl;}
	}
	return -1;
}

void tlist::Remove(const string & key)
{
	cout << "==============================================" << endl;
	cout << "Remove has been invoked \n";
	cout << "==============================================" << endl;
	int i = Search(key);

	if (i != -1)
	{
		for (int j = i; j<count - 1; j++) //shifting array down
		{
			DB[j] = DB[j + 1];
		}
		count--;
	}
}

