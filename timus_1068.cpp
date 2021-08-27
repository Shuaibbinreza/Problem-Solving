#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, sum = 0;
    cin >> a;
    if (a < 0){
        for(int i = a; i <= 1; i++){
            sum = sum + i;
        }
    }
    else if(a == 0)
        sum = 1;
    else{
        for(int i = 1; i <= a; i++){
            sum = sum + i;
        }
    }


    cout << sum << endl;
    
    return 0;
}