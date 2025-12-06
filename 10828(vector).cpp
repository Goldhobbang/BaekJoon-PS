#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    string cmd;
    cin >> N;
    vector<int> arr;
    
    for(int i = 0 ; i < N;i++){
        cin >> cmd;

        if(cmd == "push"){
            int X;
            cin >> X;
            arr.push_back(X);
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

        else if(cmd == "top"){
            if(!arr.size()) cout << "-1" << endl;
            else cout << arr.back() << endl;
        }
    }
    return 0;
}