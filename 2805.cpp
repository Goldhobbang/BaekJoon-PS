#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    int max=-1;
    unsigned long long tree=0; 
    for(int i = 0 ; i < N ; i ++){
        int a;
        cin >> a;
        if(a>max){
            max=a;
        }
        tree+=a;
    }
    int cnt=0;
    while(tree > M){
        tree-=N;
        cnt++;
    }
    cout << max-cnt;
    
    return 0;
}