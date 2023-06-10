#include <iostream>

using namespace std; 

int main(){
    int n;
    cin >> n;
    int sum = 0;
    while(num != 0){
        while(n!=0){
            n/=10;
            sum += n%10;
        }
        int multi = 1;
        while(sum!=0){
            sum/=10;
            multi *= n%10;
        }
    }

    cout << sum;
    
    if (n == sum) cout << "perfect";
    else cout << "not perfect";
}