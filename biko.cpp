#include<iostream>
using namespace std;
int main(){
    // struct xy
    // {
    //     int x;
    //     int y;
    // };
    // struct xy arr[100000];

    // int N;
    // cin >> N;
    // for(int i = 0; i< N;i++){
    //     cin >> arr[i].x >> arr[i].y; 

    // }

    int N;
    int arr[100001];
    int visit[100001] = {0};
    int cost = 0 ;
    cin >> N;
    for(int i = 0; i< N;i++){
        cin >> arr[i];
        if(visit[arr[i]]){
            cost+=i;
            int j;
            for(j=0;visit[j]!=0;j++);
            visit[j] == 1;
        }
        else{
            if(arr[i]>N){
                cost+=i;
                int j;
                for(j=0;visit[j]!=0;j++);
                visit[j] == 1;
            }
            visit[arr[i]] == 1;
        }
    }
    cout << cost;
    return 0;
}