#include <iostream>

using namespace std;
int main(){
    int mush[11];
    int s=0;

    for(int i =0;i<10;i++){
        cin >> mush[i];
    }
    for(int i=0;i<10;i++){
        s+=mush[i];
        if(s>100){
            if(s-100 <= 100-s+mush[i]){
                break;
            }
            else{
                s -=mush[i];
                break;
            }
        }
    }
    cout << s;


    return 0;
}