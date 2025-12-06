#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

struct con{
    int st;
    int ed;

};

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    vector<con> cons(N);
    for(int i = 0 ; i < N; i++){
        cin >> cons[i].st;
        cin >> cons[i].ed;
    }

    sort(cons.begin(), cons.end(), [](const con& a, const con& b) {
        return a.st < b.st;
    });

    priority_queue<int, vector<int>, greater<int>> rooms;

    rooms.push(cons[0].ed);
    // for(int t = 0 ; !conf.empty();t++){
    //     sort(rooms,rooms+r);
    //     int j = 0;
    //     if(t == conf.top().st){
    //         if(!conf.empty()){
    //             if(rooms[0]>t){
    //                 rooms[r] = conf.top().ed+t;
    //                 r++;
    //                 conf.pop();
    //             }
    //             else{
    //                 rooms[0] = conf.top().ed+t;
    //                 conf.pop();
    //             }
    //         }
    //         if(conf.top().st ==t){
    //             t--;
    //         }
    //     }   
        // for(int k = 0 ; k < r; k++){
        //     cout << "r:" << rooms[k] << " ";
        // }
        // cout << endl;
    for (int i = 1; i < N; i++) {
        if (rooms.top() <= cons[i].st) {
            rooms.pop();
        }
        rooms.push(cons[i].ed);
    }
    cout << rooms.size();
    return 0;
}