#include <iostream>

using namespace std; 

int main(){
    int n;
    cin >> n;
    int maxi = -9999;
    while(n != 0){
        maxi = max( maxi , n%10);
        n/=10; 
    }

    cout << maxi;
    
}