#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, n;

    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> n >> m;
        
        long long int d = m * 2;
        long long int nd = n / d;
        long long int r = nd * m;
        cout << "Case " << i << ": " << r*m << endl;
        
    }

    return 0;
}