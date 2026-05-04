//wacp that takes an integer as an input from the user print all the numbers between 1 to n that is divisible by 2

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter N: ";
    cin>>a;
    for(int i = 0; i<=a; i+=2){
        cout<<i<<" ";
    }
    

    return 0;
}