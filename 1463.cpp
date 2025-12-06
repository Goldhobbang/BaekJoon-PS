    #include <iostream>
    #include <algorithm>
    using namespace std;
    int visit[10000000];
    int F(int N){
        int arr[3] = {N,N,N};
        int result = N;
            if(visit[N] != -1) return visit[N];
            else if(N==1) return 0;
            else{
                if(N%3==0){
                    arr[0] = F(N/3) + 1;
                }
                if(N%2==0){
                    arr[1] = F(N/2) + 1;
                }
                arr[2] = F(N-1)+1;
                result = min({arr[0],arr[1],arr[2]});
            }
            return visit[N] = result;
    }
    int main(){
        cin.tie(nullptr)->sync_with_stdio(false);
        int N;
        fill(visit, visit + 10000000, -1);

        cin >> N;
        cout << F(N);
        return 0;
    }