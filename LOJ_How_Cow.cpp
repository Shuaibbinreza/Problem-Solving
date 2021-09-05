#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x1, x2, y1, y2, t, T, cx, cy;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> T;
        cout << "Case " << i+1 << ":" << endl;
        while(T--){
            cin >> cx >> cy;
            if (cx > x1 && cy > y1 && cx < x2 && cy < y2){
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
    }
    
    return 0;
}