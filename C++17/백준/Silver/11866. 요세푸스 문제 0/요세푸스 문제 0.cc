#include <iostream>
#include <queue>

using namespace std;

int main() {
	int K, N, j = 0;
	cin >> N >> K;
	queue<int> members;
	for (int i = 0; i < N; i++)
	{
		members.push(i+1);
	}
	cout << "<";
	while (1)
	{
		if (!members.empty())
		{
			for (int j = 1; j < K; j++)
			{
				members.push(members.front());
				members.pop();
			}
			cout << members.front();
			members.pop();
			if (!members.empty())
				cout << ", ";
		}
		else
			break;

	}
	cout << ">";
// 1 2 3 4 5 6 7
// 4 5 6 7 1 2 -> 3아웃
// 7 1 2 4 5 -> 6아웃
// 4 5 7 1 -> 2 아웃
// 1 4 5 -> 7아웃
// 1 4 -> 5아웃
// 

	return 0;
}