#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cctype>
#include <queue>
#include <stack>
using namespace std;

int atoz[27];

void printStack(stack<int> s) {
    stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << "]\n";
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    for(int i = 0 ; i < 26 ; i ++){
        cin >> atoz[i];
    }
    stack<int> q;
    string s;
    cin >> s;
    for(char c : s){
        // printStack(q);
        if(isalnum(c)){
            int C = c-65;
            q.push(atoz[C]);
        }
        else{
            int b = q.top();
            q.pop();
            int a = q.top();
            q.pop();
            // cout << "연산자 dectected " << a << ' ' << b << endl;
            int result;
            if( c == '+'){
                result = a+b;
            }
            else if(c == '-'){
                result = a-b;
            }
            else if(c == '*'){
                result = a*b;
            }
            else if(c == '/'){
                if(b==0){
                    cout << "ZeroDivisionError";
                    return 0;
                }
                result = a/b;
            }
            q.push(result);
        }
    }
    cout << q.top();

    return 0;
}