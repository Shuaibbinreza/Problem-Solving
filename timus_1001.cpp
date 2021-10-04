#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    long long int n;
    double res;

    vector< double > v;
	map<int, int> m;

    while (cin >> n){
        res = sqrt(n);
        v.push_back(res);
    }

    for (int i = v.size()-1; i >= 0; i--){
        printf("%0.4lf\n", v[i]);
    }

    return 0;
}


