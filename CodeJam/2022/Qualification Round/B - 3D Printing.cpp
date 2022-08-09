#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    
    for(int z=1; z<=t; z++)
    {
        int total = 1000000;
        
        vector<vector<int>> v(3, vector<int>(4));
        
        for(int i=0; i<3; i++)
            for(int j=0; j<4; j++)
                cin >> v[i][j];
        
        int c = v[0][0];
        for(int i=1; i<3; i++) c = min(v[i][0], c);
        
        int m = v[0][1];
        for(int i=1; i<3; i++) m = min(v[i][1], m);
        
        int y = v[0][2];
        for(int i=1; i<3; i++) y = min(v[i][2], y);
        
        int k = v[0][3];
        for(int i=1; i<3; i++) k = min(v[i][3], k);
        
        cout << "CASE #" << z << ": ";
        if(c + m + y + k >= total)
        {
            vector<int> u = {c, m, y, k};
            for(int i=0; i<4; i++)
            {
                if(total != 0) cout << min(u[i], total) << ' ';
                else cout << 0 << ' ';
                total -= min(u[i], total);
            }
            
            cout << '\n';
        }
        
        else cout << "IMPOSSIBLE" << '\n';
    }
    
    return 0;
}
