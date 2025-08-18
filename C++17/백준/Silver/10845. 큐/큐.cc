#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, n;
	cin >> N;
	vector<int> stack;
	string command;
	for (int i = 0; i < N; i++)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> n;
			stack.push_back(n);
		}
		else if (command == "size")
		{
			cout << stack.size() << endl;
		}
		else if (command == "pop")
		{
			if (stack.empty())
				cout << "-1" << endl;
			else
			{
				cout << stack.front() << endl;
				stack.erase(stack.begin());
			}
		}
		else if (command == "empty")
		{
			cout << stack.empty() << endl;
		}
		else if (command == "front")
		{
			if (stack.empty())
				cout << "-1" << endl;
			else
				cout << stack.front() << endl;
		}
		else if (command == "back")
		{
			if (stack.empty())
				cout << "-1" << endl;
			else
				cout << stack.back() << endl;
		}
	}

}