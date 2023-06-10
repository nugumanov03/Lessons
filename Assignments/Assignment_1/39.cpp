#include <iostream>

using namespace std; 

int main(){
   int n;
   cin >> n;
   int ini_n1 = n , ini_n = n;
   int cnt = 0;
    while(n != 0){
        n/=10;
        cnt++;
    }
    int num =0;
    while(ini_n1 != 0){
        num+= pow(ini_n1%10,cnt);
    }
    if (num == ini_n){
        cout << "Armstrong Number";
    }else{
        cout << "Not Armstrong Number";
    }
}   