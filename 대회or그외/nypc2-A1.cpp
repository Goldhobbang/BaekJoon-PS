    #include <iostream>
    #include <algorithm>
    #include <cmath>
    using namespace std;

    int main(){
        int N,K,cnt=0;

        int arr[300001]={0};
        cin >> N >> K;
        for(int i = 0 ; i < N; i++){
            cin >> arr[i];
        }
        sort(arr,arr+N);
        long long min1 = 9999999999999999;
        for(int i = 0 ; i <= N-K;i++){

            long long temp = 0;
            if(K%2){
                for(int j = 0 ; j< K;j++) temp +=llabs((long long)arr[i+K/2] - arr[i+j]);
                if(temp < min1) min1 =  temp;
            }
            else{
                int m1 = i+K/2-1;
                int m2 = i+K/2;
                for(int j = 0 ; j< K;j++) temp +=llabs((long long)arr[m1] - arr[i+j]);
                if(temp < min1) min1 = temp;
                temp = 0;
                for(int j = 0 ; j< K;j++) temp +=llabs((long long)arr[m2] - arr[i+j]);
                if(temp < min1) min1 = temp;
            }


        }
        cout << min1;
        return 0;
    }