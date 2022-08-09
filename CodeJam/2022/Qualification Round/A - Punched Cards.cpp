#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    
    for(int z=1; z<=t; z++)
    {
        int row, col; 
        cin >> row >> col;
        
        int x = 2*row + 1;
        int y = 2*col + 1;

        vector<char> s(y), c(y);
        
        for(int i=0; i<y; i++)
        {
            s[i] = (i & 1) ? '-' : '+';
            c[i] = (i & 1) ? '.' : '|';
        }

        string s1 = ""; for(char ch : s) s1 += ch;
        string c1 = ""; for(char ch : c) c1 += ch;

        cout << "CASE #" << z << ":" << '\n';
        s1[0] = '.'; s1[1] = '.';
        c1[0] = '.';
        cout << s1 << '\n';
        cout << c1 << '\n';

        s1[0] = '+'; s1[1] = '-';
        c1[0] = '|';

        for(int i=3; i<=x; i++)
            cout << ((i & 1) ? s1 : c1) << '\n';
    }
        
    return 0;
        
}
