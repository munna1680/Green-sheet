#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> s(n);

    for(int i = 0;i < n;i++)
    {
        cin >> s[i];
    }

    int total = 0;

    for(int i = 0;i < n;i++)
    {
        total += (s[i] / 3) * 3;
    }
    
    cout << total << endl;
}