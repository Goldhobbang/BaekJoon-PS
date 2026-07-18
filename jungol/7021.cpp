#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,X;
    int inmax = -1;
    cin >> N >> X;
    for(int i = 0 ; i < N ; i ++){
        int a,b;
        cin >> a >> b;
        if(a+b <= X){
            inmax = max(inmax,a);
        }
    }
    cout << inmax;
    return 0;
}