#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N,n, total = 0;
	cin >> N;
	vector<int> numbers;
	for (int i = 0; i < N; i++)
	{
		cin >> n;
		if (n == 0)
			numbers.pop_back();
		else
			numbers.push_back(n);
	}
	numbers.shrink_to_fit();
	for (int i = 0; i < numbers.size(); i++)
	{
		total += numbers[i];
	}

	cout << total;


}