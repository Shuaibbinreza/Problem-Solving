#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, ax, ay, bx, by, cx, cy;

    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> ax >> ay >> bx >> by >> cx >> cy;

        int a = cx - bx;
        int dx = a + ax;

        int d = cy - by;
        int dy = d + ay;
        
        int c = bx - ax;

        double area = 0.5 * ((ax*by) + (bx*cy) + (cx*dy) + (dx*ay) - (ay*bx) - (by*cx) - (cy*dx) - (dy*ax));
        int pa;
        if(area < 0){
            pa = (int)area * -1;
        }
        else    pa = (int)area;

        cout << "Case " << i << ": " << dx << " " << dy << " " << pa << endl;
        
    }

    return 0;
}