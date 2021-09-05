#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int num;
    int i = 1;
    cin >> t;
    while(t--){
        cin >> num;

        if(num % 2 != 0){
            cout << "Case " << i << ": " << "Impossible" << endl;
        }
        else{
            long long int m, n;
            m = 2;
            n = num / 2;
            while(1){
                if(n % 2 == 0){
                    n = n / 2;
                    m = m * 2;
                    continue;
                }
                else{
                    cout << "Case " << i << ": " << n << " " << m << endl;
                    break;
                }
            }
        }
        i++;
    }
    
    return 0;
}