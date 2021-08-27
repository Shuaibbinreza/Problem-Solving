#include <bits/stdc++.h>
using namespace std;

int primes[15001];

void primeck(int primes[])
{
    int n = 163845;
    int arr[n]={};
 
    for (int i = 2; i <= n/2; i++) {
        if (arr[i] == 0) {
            for (int j = i * 2; j < n; j += i)
                arr[j] = 1;
        }
    }
    
    int c = 1;
    for (int p = 2; p < n; p++){
        if (arr[p] == 0){
            primes[c] = p;
            c++;
        }
            
    }

}
 
int main()
{ 
    int t;
    primeck(primes);
    cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        cin >> n;
        cout << primes[n] << endl;
    }
 
    return 0;
}