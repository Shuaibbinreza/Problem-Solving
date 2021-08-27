#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num, n;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> n;
        int a, sum = 0;
        while(n--){
            cin >> a;
            if(a > 0)
                sum = sum + a;
        }
        cout << "Case " << i+1 << ": " << sum << endl;
        
    }
    
    return 0;
}