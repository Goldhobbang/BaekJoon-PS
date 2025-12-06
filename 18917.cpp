#include <iostream>

using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int cmd;
    long long x=0;
    long long sum=0,xr=0;
    cin >> N;
    for(int i = 0 ; i < N; i++){    
        cin >> cmd;
        if(cmd == 1){
            cin >> x;
            xr ^= x;
            sum+=x;
        }
        else if(cmd == 2){
            cin >> x;
            sum-=x;
            xr ^= x;
        }
        else if(cmd == 3){
            cout << sum << "\n";
        }
        else if(cmd == 4){
            cout << xr << "\n";  
        }
    }
    return 0;
}