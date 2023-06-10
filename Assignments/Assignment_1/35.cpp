#include <iostream>

using namespace std; 

int main(){
    int n;
    cin >> n;
    int mini = -9999;
    while(n != 0){
        mini = min( mini , n%10);
        n/=10; 
    }
    cout << mini;
}