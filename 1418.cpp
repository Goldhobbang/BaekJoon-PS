#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,K;
    cin >> N >> K;
    int cnt = 0;
    for(int i = 1 ; i <= N ; i++){
        int maxint=1;
        int num = i;
        for(int j=2;j<=num;j++){
            while(num%j==0){
                num = num/j;
                maxint = max(maxint,j);
            }
        }
        if(maxint <= K){
            cnt++;
            // cout << "num : " << i<< endl;
        }
    }
    cout << cnt;
    return 0;
}