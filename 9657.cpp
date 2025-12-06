#include <iostream>
int rock[1002];
// 0 = SK 1 = CY
// 하나라도 0 SK 다 1이면 CY
// whowin(0) = 1
// whowin(1) = 0
// whowin(2) = 1
// whowin(3) = 0 
int whowin(int n){
    int result = 0;
    if(rock[n] != -1) return rock[n];
    else if(n==0) return 1;
    else{
        int arr[3] = {1, 1, 1};
        if(n-4>=0) arr[2] = !whowin(n-4);
        if(n-3>=0) arr[1] = !whowin(n-3);
        if(n-1>=0) arr[0] = !whowin(n-1);
        result = (arr[2]*arr[1]*arr[0]); 
    }
    return rock[n] = result;
}

using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    fill(rock, rock+1001,-1);
    if(!whowin(N)){
        cout << "SK";
    }
    else cout << "CY";
    return 0;
}