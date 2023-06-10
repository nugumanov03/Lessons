#include <iostream>

using namespace std; 

int main(){
    int a = 3;
    int b = 2;
    int ini_a = a;int ini_b = b;
    while(a!=0 && b!=0 ){
            if( a > b){
                a = a % b;
            }else{
                b = b%a;
            }
    }
    int gcd = a + b;
    
    int scm = (ini_a * ini_b) / gcd;
    cout << scm;
    
}