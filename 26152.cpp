#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,Q;
    int arr[250000];
    int C[250000];
    cin >> N;
    for(int i = 0 ; i < N; i++){
        int a,b;
        cin >> a >> b;
        arr[i] = a-b;
        if(i>0) C[i] = min(C[i],C[i-1]);
    }
    cin >> Q;
    int w;
    for(int i = 0 ; i < N; i++){
        cin >> w;
        ;
    }
    binary_search(C,C+N,w);


    return 0;
}