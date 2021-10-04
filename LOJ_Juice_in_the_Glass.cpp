#include<bits/stdc++.h>

using namespace std;

double pi = 2 * acos(0.0);

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        int r1, r2, r3, h, p;
        cin >> r1 >> r2 >> h >> p;

        int rd = r1 - r2;
        double d = ((double)rd * (double)p) / (double)h;
        double r = d + r2;

        double v = (pi / 3.0) * (double)p * (((double)r*(double)r) + ((double)r2*(double)r2) + (double)r*(double)r2);
        //cout << "Case " << i << ": " << v << endl;
        
        printf("Case %d: %.10lf\n", i, v);  

    }

    return 0;
}