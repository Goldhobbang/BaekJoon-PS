#include <iostream>
using namespace std;

int arr[100010];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    int front, back;
    int frequen = 1;
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
        if(arr[i-1] > arr[i] && frequen == 1){
            frequen = 0;
            front = i-1;
        }
    }
    frequen = 1;
    for(int i = N-1 ; i > 0 ; i--){
        if(arr[i] < arr[i-1] && frequen == 1){
            frequen = 0;
            back = i;
        }
    }
    int cnt=0;
        for(int i = front ; i <= back ; i++){
            if(arr[i-1] <= arr[i+1]) cnt++;
                cout << "Front: " << front << " Back: " << back << '\n';
        }
        cout << cnt;

    return 0;
}