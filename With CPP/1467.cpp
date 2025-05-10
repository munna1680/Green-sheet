#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    while(cin >> a >> b >> c)
    {
        if(a == b && a != c) 
        {
            cout << "C" << endl;
        }
        else if(b == c && a != b && a != c) 
        {
            cout << "A" << endl;
        }
        else if(a == c && a != b && b != c) 
        {
            cout << "B" << endl;
        }
        else 
        {
            cout << "*" << endl;
        }
         
    }
    return 0;

}