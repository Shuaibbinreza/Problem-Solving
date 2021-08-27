#include<bits/stdc++.h>

using namespace std;

int main()
{
    double pi = acos(0.0) * 2.00;
    double n;
    int num;
    cin >> num;

    for (int i = 0; i < num; i++){
        cin >> n;
        double arm = n*2;
        double s_area = arm*arm;

        double c_area = pi*n*n;
        double res = s_area - c_area;

        printf("Case %d: %0.2lf\n", i+1, res);
    }
    
    return 0;
}