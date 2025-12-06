#include <iostream>
#include <vector>
using namespace std;

int A[1000003];


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;


    cin >> N;

    for(int i = 0 ; i < N; i++){
        int a;
        cin >> a;
        if(a<0) a = -a + 500000;
        A[a]++;
    }
    cin >> M;
    for(int i = 0 ; i < M; i++){
        int a;
        cin >> a;
        if(a<0) a = -a + 500000;
        cout << A[a] << ' ';
    }
    return 0;
}