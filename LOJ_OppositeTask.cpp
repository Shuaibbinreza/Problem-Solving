#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num, n, cmt1, cmt2;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> n;
        cmt1 = n / 2;
        cmt2 = n - cmt1;

        cout << cmt1 << " " << cmt2 << endl;

    }
    
    return 0;
}