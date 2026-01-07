#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    string S;
    vector<string> list;
    for(int i = 0; i < T; i++)
    {
        cin >> S;
        list.push_back(S);
    }
    for(int i = 0; i < T; i++)
    {
        cout << list[i][0] << list[i][list[i].size() - 1] << endl;
    }
    return 0;
}