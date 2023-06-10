#include <iostream>

using namespace std; 

int main(){
    
   int n;
   float cnt = 0 , sum =0;
    while(cin >> n){
       if(n == 0){
        break;
       }
        sum+= n;
        cnt++;
    }
    cout << sum /cnt;
}