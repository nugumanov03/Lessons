#include <iostream>

using namespace std; 

int main(){
   int n;
   cin >> n;
   int new_num = 0;
   int cnt = 1;
    while(n != 0){
        new_num+= cnt*10 +  n%10;
        n/=10;
    }

    if (n == new_num){ cout << "Palindrom";}
    else{ cout << " NOT Palindrom";}
}   