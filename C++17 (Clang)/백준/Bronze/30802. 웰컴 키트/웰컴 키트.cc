
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int total;
	cin >> total;
	int s, m, l, xl, xxl, xxxl;
	cin >> s >> m >> l >> xl >> xxl >> xxxl;
	int T, P;
	cin >> T >> P;
	vector<int> sizes = { s, m, l, xl, xxl, xxxl };
	int totalT = 0;
	for (int i = 0; i < sizes.size(); i++)
	{
		if (sizes[i] % T != 0)
			totalT += sizes[i] / T + 1;
		else
			totalT += sizes[i] / T;

	}



	cout << totalT << endl;
	cout << total / P << " " << total % P << endl;
	return 0;
}

