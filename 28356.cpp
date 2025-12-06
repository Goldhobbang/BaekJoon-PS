#include <iostream>

using namespace std;
int main(){

    int n,m;
    int arr[6] = {3,2,4,2};
    int arr2[4] = {4,1,3,1};

    scanf("%d %d",&n,&m);

    if(n + m == 2){
        cout << "1\n1";
        return 0;
    }
    else if(n==1){
        printf("2\n");
        for(int i=0;i<m;i++){
            cout << i%2+1;
            cout << " ";
    }}

    else if(m==1){
        printf("2\n");
        for(int i=0;i<n;i++){
            cout << i%2+1;
            cout << endl;
        }
    }
    else{
        printf("4\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i%2==0) cout << arr[j%4];
                else cout << arr2[j%4];
                cout << " ";
            }
            cout << endl;
        }       
    }

    return 0;
}