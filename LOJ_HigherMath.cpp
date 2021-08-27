#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num, a, b, c;
    cin >> num;

    long int res1, res2;

    for(int i = 0; i < num; i++){
        cin >> a >> b >> c;
        if(a > b){
            if(a > c){
                res1 = a*a;
                res2 = (b*b) + (c*c);
            }
            else{
                res1 = c*c;
                res2 = (b*b) + (a*a);
            }
        }
        else if(b > c){
            res1 = b*b;
            res2 = (a*a) + (c*c);
        }
        else{
            res1 = c*c;
            res2 = (b*b) + (a*a);
        }

        if(res1 == res2){
            cout << "Case " << i+ 1 << ": " << "yes" << endl;
        }
        else{
            cout << "Case " << i+ 1 << ": " << "no" << endl;
        }
    }
    
    return 0;
}