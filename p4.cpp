//WACP that takes an integer N as input from the user then calculate its factorial using for loop

#include <iostream>
using namespace std;
int main(){
    int a;
    long long fact = 1;
    cout<< "Enter N: ";
    cin>>a;
    for(int i = 1; i<=a; i++){
        fact = fact*i;
      
    }
     cout<<fact;
    

    return 0;
}