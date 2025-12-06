#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int K,C;

    cin >> K >> C;
    for(int i = 0 ; i < C; i++){
        int M,N;
        cin >> M >> N;
        if(K==3){
            if(M==3 && N==0 || M==3 && N==1 || M==0 && N==3 || M==1 && N==3) cout << 0 << endl;
            else cout << 1 << endl;
        }
        else if(K==2){
            if(M==0&&N==2){
                cout << 0 << endl;
            }
            else cout << 1 << endl;
        }
        // int a=0,b=0;
        // bool o = 0;
        // while(a<M||b<N){
        //     if(a<M) a++;
        //     if(b<N) b++;
        //     if(M <= N && a+K-b < b || M>N && b+K-a < a){
        //         cout << 0 << endl;
        //         o = 1;
        //         break;
        //     }
        // }
        // if(o==1) cout << 1 << endl;
    }
    return 0;
}