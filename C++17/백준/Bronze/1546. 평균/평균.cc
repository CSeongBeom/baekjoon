#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	int max_index = 0;
	double total_score = 0;
	cin >> N;
	vector<int> scores(N);
	for (int i = 0; i < N; i++)
	{
		cin >> scores[i];
		if (scores[max_index] <= scores[i])
		{
			max_index = i;
		}
	}
	for (int j = 0; j < N; j++)
	{
		total_score += ((float)scores[j] / (float)scores[max_index]) * 100;
	}
	cout << total_score / N << endl;

}