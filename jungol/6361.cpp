#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

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
void printArray(int arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}
int arr[1001];
int ans[1001];
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    queue<int> q;
    for(int i = 0 ; i < N ; i ++){
        cin >> arr[i];
        q.push(i);
    }
    int time = 1;
    while(!q.empty()){
        // printQueue(q);
        // cout << "ARR : ";
        // printArray(arr,N);
        int curr = q.front();
        q.pop();
        arr[curr]--;
        if(arr[curr] > 0){
            q.push(curr);
        }
        else{
            ans[curr] = time;
        }
        time++;
    }
    for(int i = 0 ; i < N ; i ++){
        cout << ans[i] << ' ';
    }
    
    return 0;
}