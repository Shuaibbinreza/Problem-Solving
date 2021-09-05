#include<bits/stdc++.h>

using namespace std;

int oneck(int num)
{
    double n = (sqrt(8.0 * num + 1) - 1) / 2;
    long long int s1 = int(n);

    if(n - s1 == 0)
        return 1;

    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int res = oneck(num - 1);
        cout << res << " ";
    }
    
    return 0;
}