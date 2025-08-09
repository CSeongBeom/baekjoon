#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>n(N);
	for (int i = 0; i < N; i++)
	{
		cin >> n[i];
	}
	vector<int>find;
	find.clear();
	int find_flag;
	for (int i = 0; i < n.size(); i++)
	{
		find_flag = 0;
		if (n[i] != 1)
		{
			for (int j = 2; j < n[i]; j++)
			{
				if (n[i] % j == 0)
				{
					find_flag = 1;
					continue;
				}
			}
		}
		else if (n[i] == 1)
			continue;
		if (find_flag == 0)
			find.push_back(n[i]);
	}
	cout << find.size() << endl;
	return 0;
}