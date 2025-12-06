#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


struct name{
    int age;
    string name;
};

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    vector<name> names(N);

    for(int i = 0 ; i < N; i++){
        cin >> names[i].age >> names[i].name;
    }

    stable_sort(names.begin(), names.end(), [](const name& a, const name& b){
        return a.age < b.age;
    });
    
    for(int i = 0 ; i < N; i++){
        cout << names[i].age << ' ' << names[i].name << '\n';
    }
    return 0;
}