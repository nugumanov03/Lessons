#include <iostream>

using namespace std; 

int main(){
   int n;
   cin >> n;
   int i = 0;
   int factor = 1;
   while( i != n+1){
        factor *= i;
   } 
   cout << factor << endl;
}   