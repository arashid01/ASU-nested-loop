#include<iostream>
using namespace std;
//rows = 7, columns = 5
int main()
{
	for (int rows = 1; rows <= 7; rows++)
	{
		for (int columns = 1; columns <= 5; columns++)
		{
			if (columns == 3)
			{
				cout << "+";
	    		}
			else if (columns == 2 && rows == 2)
			{
				cout << "+";
			}
			else if (columns == 1 && rows == 3)
			{
				cout << "+";
			}
			else if (rows == 7)
			{
				cout << "+";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
