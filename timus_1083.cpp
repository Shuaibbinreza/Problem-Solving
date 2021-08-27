#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    char ch[30];

    cin >> num >> ch;
    int k = strlen(ch);
    
    int chk, sum = 1;
    if(num % k == 0)
        chk = k;
    else    chk = num % k;
    
    for(int i = chk; i <= num; i = i + k){
        sum = sum * i;
    }

    cout << sum << endl;
    
    return 0;
}