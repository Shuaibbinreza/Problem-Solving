#include<bits/stdc++.h>

using namespace std;
const int N=1e5+5;

int main()
{
    long long int num, n, m;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> m >> n;

        if(m == 1 || n == 1){
            cout << "Case " << i + 1 << ": " << max(m, n) << endl;
        }
        else if(n > 2 && m > 2){
            long long int res = (m * n);
            if(res % 2 == 0)
                cout << "Case " << i + 1 << ": " << res / 2 << endl;
            else
                cout << "Case " << i + 1 << ": " << (res / 2) + 1 << endl;
        }
        else if(m == 2 || n == 2){
            long long int res = (m * n) % 8;
            long long int r = ((m * n) / 8) * 4;
            if(res <= 4){
                cout << "Case " << i + 1 << ": " << r + res << endl;
            }
            else{
                cout << "Case " << i + 1 << ": " << r + 4 << endl;
            }

        }

    }
    
    return 0;
}