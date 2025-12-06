#include <iostream>
#include <algorithm>
using namespace std;

    struct con{
        int st;
    int ed;
};

int compare(con left, con right) {
	if (left.ed > right.ed) return 0;
	if (left.ed < right.ed) return 1;
	return left.st < right.st;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N, t=0, cnt=0;
    struct con cons[100001];
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> cons[i].st;
        cin >> cons[i].ed;
    }
    sort(cons, cons+N, compare);
    for(int i = 0 ; i < N; i++){
        if(cons[i].st >= t){
            t = cons[i].ed;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}