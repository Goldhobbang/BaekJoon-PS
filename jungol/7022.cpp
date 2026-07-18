#include <iostream>
#include <vector>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> t(N);
    for(int i = 0 ; i < N ; i ++){
        cin >> x[i];
    }
    int max_time = -1, max_i=0;
    for(int i = 0 ; i < N ; i ++){
        cin >> t[i];
    }
    int curt=max(t[N-1],x[N-1]);   
    for(int i=N-2; i>=0; i--) {
        curt+=(x[i+1]-x[i]);
        if(t[i] > curt){
            curt = t[i];
        }
        // 1.단 끝까지 가서 회수를해
        // 2.돌아오면서 하나씩 회수를 하는데 도착했을때 더 기다려야하면 그때까지 기다림
        // 3. 돌아옴 :thumbswayup: 
    }
    cout << curt+x[0];
    return 0;
}