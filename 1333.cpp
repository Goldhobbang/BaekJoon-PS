#include <iostream>
using namespace std;

int Time[3800];
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,L,D;
    int i,j;
    cin >> N >> L >> D;
    
    for(i = 0 ; i < N*(L+5); i++){
        i+=L;
        for(j=0;j<5;j++){
            Time[i+j]=1;
        }
        i+=4;
    }
    for(j=0;j<=50;j++){
        Time[i+j]=1;
    }
    // for(i = 0 ; i <= N*(L+5)+50; i++){
    //     cout << Time[i];
    // }
    // cout << endl;
    for(i=1;i<=N*(L+5)+50;i++){
        // cout << "D : " << D*i-i << endl;
        if(Time[D*i]==1){
            cout << D*i;
            return 0;
        }
    }
    return 0;
}