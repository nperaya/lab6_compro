#include<iostream>
using namespace std;

int main(){
    int n =1 ;
    int even=0,odd=0;
    while(n != 0){
        cout << "Enter an integer: ";
        cin >> n;
        if(n == 0)break;
        if((n%2) == 0){
            even++;
        }
        else{
            odd++;
        }
    }
   
    cout << "#Even numbers = " << even;
    cout << "\n#Odd numbers = " << odd;

    return 0;
}