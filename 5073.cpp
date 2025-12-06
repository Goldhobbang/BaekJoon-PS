#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int trg[3];
    while(1){
        for(int i=0;i<3;i++) cin >> trg[i];
        if(trg[1]+trg[2]+trg[0]==0)return 0; 
        sort(trg,trg+3);
        int plus = trg[0]+trg[1]+trg[2];
        if(trg[2] >= trg[0]+trg[1]) cout << "Invalid" << endl;
        else{
            if(trg[0]==trg[1]&&trg[1]==trg[2]) cout << "Equilateral" << endl;
            else if(trg[0]==trg[1]||trg[1]==trg[2]||trg[0]==trg[2]) cout << "Isosceles" << endl;
            else cout << "Scalene" << endl;
        }
    }
    return 0;
}