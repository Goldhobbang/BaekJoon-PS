#include <iostream>
using namespace std;

struct Time{
    int hour;
    int minute;
};

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
struct Time t[1000];   
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> t[i].hour >> ":" >> t[i].minute;
    }
    return 0;
}