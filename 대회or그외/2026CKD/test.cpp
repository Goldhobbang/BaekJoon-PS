#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int C[4][10001];
struct New {
    int solve;
    int penal;
    int index;
};

vector<New> ans(10001);
vector<int> s_pi_ans(10001);
vector<int> s_si_ans(10001);
vector<int> s_p_ans(10001);
vector<int> s_s_ans(10001);
// 0 = 자기번호
// 1 = 소속 팀 번호
// 2 = 솔브
// 3 = 패널티
// M = 팀개수
// N = 애기 개수
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M,K;
    cin >> N >> M >> K;
    for(int i = 0 ; i < M ; i ++){
        int a;
        cin >> a;
        ans[i].index = i;
        for(int j = 0; j < a; j++){
            int A;
            cin >> A;
            C[1][A-1] = i+1;
        }
    }
    for(int i = 0 ; i < N ; i ++){
        int A,b,c;
        cin >> A >> b >> c;
        C[2][A-1] = b;
        C[3][A-1] = 10000-c;
    }
    // for(int i = 0 ; i < M ; i ++){
    //     cout << C[0][i] << " " << C[1][i] << " " << C[2][i] << " " << C[3][i] << endl;
    // }
    // return 0;
    // ans[0] => solve, ans[1] == penal;
    for(int i = 0 ; i < N ; i ++){
        ans[C[1][i]-1].solve += C[2][i];
        ans[C[1][i]-1].penal += C[3][i];
    }

    for(int i=0;i<N;i++){
        s_pi_ans[i] = (ans[i].index);
        s_si_ans[i] = (ans[i].index);
        s_p_ans[i] = (ans[i].penal);
        s_s_ans[i] = (ans[i].solve);
    }
    for(int i = 0;i<N-1;i++) {
        for(int j=0;j<N;j++){
            if(s_p_ans[i] > s_p_ans[i + 1]) {
                swap(s_p_ans[i], s_p_ans[i+1]);
                swap(s_pi_ans[i], s_pi_ans[i+1]);
            }
        }
    }
    for(int i = 0;i<N-1;i++) {
        for(int j=0;j<N;j++){
            if(s_s_ans[i] > s_s_ans[i + 1]) {
                swap(s_s_ans[i], s_s_ans[i+1]);
                swap(s_si_ans[i], s_si_ans[i+1]);
            }
        }
    }

    // for(int i = N-1 ; i >= N-K ; i--){
    for(int i = 0 ; i < N ; i++){
        cout << s_si_ans[i] << " " << s_pi_ans[i] << endl;
    }
    return 0;
}