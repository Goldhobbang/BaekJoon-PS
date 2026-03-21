#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    int tw=0,fi=0;
    for(int j = 1 ; j <= N ; j ++){
        int i = j;
        while(i%2==0 || i%5==0){
            if(i%2==0) {
            tw++;
            i/=2;
            }
            if(i%5==0){
            fi++;
            i/=5;
            }
        }
    }
    cout << min(tw,fi);
    return 0;
}