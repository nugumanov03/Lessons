#include <iostream>

using namespace std; 

int main(){
   int n;
   cin >> n;
   int flag = 1;
   if( n == 2){
        cout << "Prime";
   }else if(n % 2 ==0 || n == 1){
    cout << "Not prime";
   }else{
    for(int i = 2; i <= sqrt(n); i+=2){
        if ( n % i ==0){
            flag = 0;
        }
    }
    if (flag){ cout << "Prime";}else{ cout << "Not Prime";}
   }

}   