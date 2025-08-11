#include<iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int min_multiple, max_divide = 0;

	for (int i = 1; i <= n ; i++)
	{

		if (n % i == 0)
		{
			if (m % i == 0)
			{
				max_divide = i;
				continue;
			}
		}
	}
	int j = 1;

	while (1)
	{
		if ((max_divide * j % n == 0) && (max_divide * j % m == 0))
		{
			min_multiple = max_divide * j;
			break;
		}
		else
		{
			j++;
		}

	}
	cout << max_divide << endl << min_multiple;

	return 0;
}