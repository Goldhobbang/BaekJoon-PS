#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    long long N;
    cin >> N;

    long long s=0;
    long long e=min(N, (long long)3037000500);
    long long r=0;
    while(s <= e){
        unsigned long long m = (s+e)/2;

        if(m*m >= (unsigned long long)N){
            r = m;
            e = m-1;
        }
        else{
            s=m+1;
        }
    }
    cout << r;
    return 0;
}