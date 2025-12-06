#include <iostream>
#include <stack>

using namespace std;

int main() {
    string cmd;
    int n,x,cnt=0;
    stack<int> s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cmd;
        if(cmd == "push"){
            cin >> x;
            s.push(x);
        }
        else if(cmd == "pop"){
            if(!s.empty()){
                cout << s.top() << endl;
                s.pop();
            }
            else cout << "-1" << endl;
        }
        else if(cmd == "size"){
            int to = s.size();
            cout << to << endl;
        }
        else if(cmd == "empty"){
            if(!s.empty()) cout << "0" << endl;
            else cout << "1" << endl;
        }
        else if(cmd == "top"){
            if(!s.empty()){
                cout << s.top() << endl;
            }
            else cout << "-1" << endl;
        }

    }
    return 0;
}