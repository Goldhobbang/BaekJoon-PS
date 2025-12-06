#include <iostream>
#include <string.h>
using namespace std;

struct ans
{
    int sceneNum;
    string name;
};


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int scene=1;
    while(1){
        int N;
        cin >> N;
        cin.ignore();
        if(N==0){
            return 0;
        }
        else{
            string name[101];
            int neck[101];
            fill(neck,neck+N,0);
            for(int i = 0 ; i<N;i++){
                getline(cin, name[i]);
            }
            for(int i = 0 ; i<2*N-1;i++){
                int a;
                char b;
                cin >> a >> b;
                neck[a-1]++;
            }
            for(int i = 0 ; i<N;i++){
                if(neck[i]==1){
                    cout << scene << " " << name[i] << '\n';
                }
            }
            scene++;
        }
    }
    return 0;
}