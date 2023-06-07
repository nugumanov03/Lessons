#include<iostream> // Библеотека 

using namespace std; // Чтобы использовать std


int main(){
    int n; // Обьявление переменной 
    
    n = 5;

    int a = 5;
    int b = a - 1;// 4
    // a = a + 1; // 6
    // a-=b; // 6
    // a++; // 6 // increment 
    a+=1;// =>  a = a + 1;
    a++; // => a+=1

    cout << 2 * a - b;
}



