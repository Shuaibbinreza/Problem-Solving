#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        int lp, mp, dis, tm, gz;
        cin >> mp >> lp;
        if(lp > mp){
            dis = lp - mp;
            tm = (dis*4) + 9 + 10 + (mp * 4);
            cout << "Case " << i + 1 << ": " << tm << endl;
        }
        else{
            dis = mp - lp;
            tm = (dis*4) + 9 + 10 + (mp * 4);
            cout << "Case " << i + 1 << ": " << tm << endl; 
        }
    }
    
    return 0;
}