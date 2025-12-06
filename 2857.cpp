#include<iostream>
#include<string>

using namespace std;

int main(){
    string fbi;
    int cnt=0,ans[5];

    for(int i=0;i<5;i++){
        cin>>fbi;
        if(fbi.find("FBI")!=string::npos){
            ans[cnt]=i+1;
            cnt++;
        }
    }

    if(cnt==0)cout<<"HE GOT AWAY!";
    else{
        for(int i=0;i<cnt;i++)cout<<ans[i]<<' ';
    }

    return 0;
}