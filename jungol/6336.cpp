#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;


// 큐의 원본을 보존하기 위해 매개변수를 복사(Call by value)로 받습니다.
void printQueue(queue<int> q) {
    int size = q.size();
    
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << q.front() << " "; // 맨 앞의 값 출력
        q.push(q.front());        // 맨 앞의 값을 맨 뒤로 다시 삽입
        q.pop();                  // 맨 앞의 값 제거 (회전)
    }
    cout << "]\n";
}


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,cnt;
    cin >> N >> cnt;
    vector<int> arr(N);
    queue<int> wg;
    fill(arr.begin(),arr.end(),-1);
    for(int i = 0 ; i < cnt; i ++){
        int a;
        cin >> a;
        arr[a-1] = 0;
        wg.push(a-1);
    }
    int time;
    while(!wg.empty()){
        // printQueue(wg);
        auto curr = wg.front();
        time = arr[curr]+1;
        wg.pop();
        if(curr-1 >= 0 && arr[curr-1] == -1){
            arr[curr-1] = time;
            wg.push(curr-1);
        }
        if(curr+1 < N && arr[curr+1] == -1){
            arr[curr+1] = time;
            wg.push(curr+1);
        }
        else{
            
        }
    }
    for(auto c : arr){
        cout << c << ' ';
    }
    
    return 0;
}