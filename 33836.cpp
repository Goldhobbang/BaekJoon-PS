#include <iostream>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,i,ans;
    cin >> N;
    for(i = 0 ; i < N; i++){
        long long x,y;
        cin >> x >> y;
        if(y==0 && x>=0) ans = 0;
        else if(y!=0 && x<0 && x<y) ans = 2;
        else ans = 1;
        cout << ans << "\n";
    }
    return 0;
}