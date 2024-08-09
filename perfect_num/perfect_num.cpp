#include<iostream>
using namespace std;

int	main()
{
	int	num;
	int	sum;

	sum = 0;
	cout << "Enter a number:\n";
	cin >> num;
	for (int i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == num && num != 0)
	{
		cout << "Perfect number.";
	}
	else
	{
		cout << "Not a perfect number.";
	}
	return 0;
}
