#include <iostream>
#include <deque>
using namespace std;
int main(){
    int N;
    string cmd;
    cin >> N;
    deque<int> arr;
    
    for(int i = 0 ; i < N;i++){
        cin >> cmd;

        if(cmd == "push"){
            int X;
            cin >> X;
            arr.push_front(X);
        }

        else if(cmd == "pop"){
            if(!arr.size()) cout << "-1" << endl;
            else{
            cout << arr.back() << endl;
            arr.pop_back();
            }
        }

        else if(cmd == "size"){
            cout << arr.size() << endl;
        }   

        else if(cmd == "empty"){
            cout << arr.empty() << endl;
        }

        else if(cmd == "front"){
            if(!arr.size()) cout << "-1" << endl;
            else cout << arr.back() << endl;
        }

        else if(cmd == "back"){
            if(!arr.size()) cout << "-1" << endl;
            else cout << arr.front() << endl;
        }
    }
    return 0;
}