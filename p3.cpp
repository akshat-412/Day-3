//wacp that takes an integer as an input from the user print all the numbers between 1 to n that is divisible by 2 using do while loop

#include <iostream>
using namespace std;
int main(){
    int a, i=0;
    cout<< "Enter N: ";
    cin>>a;
    do{
        cout<<i<<" ";
        i+=2;
    }while(i<=a);
    

    return 0;
}