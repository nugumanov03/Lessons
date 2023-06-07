#include<iostream> // Библеотека 

using namespace std; // Чтобы использовать std


int main(){
    int a;
    cin >> a; // 2
    
    int p = a < 3; //
    cout << p ;

    int k = (a == 0);
    cout << k;

    if(k){
        cout << " a eto nol ";
    }else if( a % 2 == 0){
        cout << " a chetnoe ";
    }else{
        cout << " a nechentoe ";
    }



    
    cout << " a sravnili";
}



