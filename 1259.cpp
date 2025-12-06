#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    while(true){
        char a[10];
        cin >> a;
        if(a[0]=='0' && a[1] == '\0') return 0;
        int size = strlen(a);
        bool is_palindrome = true;
        for(int i = 0; i < size/2; i++){
            if(a[i] != a[size-i-1]){
                is_palindrome = false;
                break;
            }
        }
        cout << (is_palindrome ? "yes" : "no") << '\n';
    }
    return 0;
}