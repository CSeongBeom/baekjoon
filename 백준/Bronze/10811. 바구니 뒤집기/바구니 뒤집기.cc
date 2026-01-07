#include <iostream>
#include <vector>

using namespace std;

vector<int> makelist (int N) {
    vector<int> list;
    for(int i = 1; i <= N ; i++)
    {
        list.push_back(i);
    }
    return list;
}

vector<int> changelist (int i, int j, vector<int> list) {
    vector<int> newlist = list;
    int b = j-1;
    for (int a = i-1; a < j; a++)
    {
        newlist[a] = list[b];
        b--;
    }
    return newlist;
}

int main() {
    int N, M, i, j;
    cin >> N >> M;
    vector<int> list = makelist(N);
    for(int k = 0; k < M; k++)
    {
        cin >> i >> j;
        list = changelist(i, j, list);
    }
    for(int i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }
    return 0;
}