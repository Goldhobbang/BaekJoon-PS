#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int hour,minute;
    int minute2;
    cin >> hour >> minute;
    cin >> minute2;
    cout << (hour+(minute+minute2)/60)%24 << ' ' << (minute+minute2)%60 << '\n';
    return 0;
}