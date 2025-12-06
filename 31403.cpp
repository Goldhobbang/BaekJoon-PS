#include <iostream>
#include <string>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int a,b,c;

    cin >> a >> b >> c;
    cout << a+b-c << "\n";
    string A = to_string(a);
    string B = to_string(b);
    string AB = A+B;
    int abc = stoi(AB);
    cout << abc-c<< "\n";
    return 0;
}   