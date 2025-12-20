#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    int cnt=0;
    for(int j = 1; j <= N;j++){
        int i = j;
        int current = i%10;
        i /= 10;
        int chai = current-i%10;
        while(i>0){
            if(current-chai==i%10){
                current = i%10;
                i/=10;
            }
            else {
                i=-1;
            }
        }
        if(i!=-1){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}