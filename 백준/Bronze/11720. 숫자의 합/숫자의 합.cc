#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N;
    string s;
    cin >> s;
    M = 0;
    for(int i = 0; i < N; i++)
    {
        M += (s[i] - '0');
    }
    cout << M;
}