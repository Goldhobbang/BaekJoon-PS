#include <iostream>
using namespace std;
int main(){
    int a,b,c,h,t,s,ans=10000000;
    cin>>a>>b>>c>>h;
    for(int i=0;i<8;i++){
        t=(i&1?a/2:a)+(i&2?b/2:b)+(i&4?c/2:c);
        s=(i&1?a/2:0)+(i&2?b/2:0)+(i&4?c/2:0);
        if(s<=h-1&&t<ans)ans=t;
    }
    cout<<ans;
}
