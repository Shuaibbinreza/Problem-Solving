#include<bits/stdc++.h>

using namespace std;

bool onechk(int num){
    bool chk = true;
    while(num > 0){
        int n = num % 2;
        num = num / 2;
        if(n == 1){
            if(chk)     chk = false;
            else    chk = true;
        }
    }

    return chk;
}

int main()
{
    int t, num;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> num;
        bool c = onechk(num);
        if(c)    cout << "Case " << i << ": even" << endl;
        else    cout << "Case " << i << ": odd" << endl;
    }

    return 0;
}