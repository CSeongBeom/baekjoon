#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
	int N, temp;
	cin >> N;
	queue<int> Queue;
	stack<int> Stack;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		Queue.push(temp);
	}
	int j = 1;
	int QueueFront = 0, StackBack = 0;
	while (1)
	{
		if (Queue.empty() && Stack.empty())
		{
			cout << "Nice";
			break;
		}
		if (!Queue.empty())
		{
			QueueFront = Queue.front();
		}
		else
			QueueFront = 0;
		//cout << "Qfront" << QueueFront << endl;
		if (!Stack.empty())
		{
			StackBack = Stack.top();
			//cout << "stackttop: " << StackBack << endl;
		}
		if (QueueFront == j)
		{
			//cout << " Qpop : " << Queue.front() << endl;
			Queue.pop();
			j++;
		}
		else if (StackBack == j)
		{
			//cout << " Stckpop : " << Stack.top() << endl;
			Stack.pop();
			j++;
		}
		else if (!Queue.empty())
		{
			//cout << "move to stack" << Queue.front() << endl;
			Stack.push(Queue.front());
			Queue.pop();
		}
		else if (!Stack.empty())
		{
			cout << "Sad";
			break;
		}
		//cout << "while end" << endl;
	}
	return 0;
}