    #include <iostream>

    using namespace std;
    int main(){
        int T;
        cin >> T;   
        for(int i=T;i>=0;i--){
            if(i!=T) cout << "\n\n";
            if(i > 2) cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\nTake one down and pass it around, " << i-1 <<" bottles of beer on the wall.";
            else if(i == 2) cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\nTake one down and pass it around, " << i-1 <<" bottle of beer on the wall.";
            else if(i == 1) cout << i << " bottle of beer on the wall, " << i << " bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.";
            else if(i==0 && T!=1) cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, " << T <<" bottles of beer on the wall.";
            else if(i==0 && T==1) cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, " << T <<" bottle of beer on the wall.";
        }
        return 0;
    }