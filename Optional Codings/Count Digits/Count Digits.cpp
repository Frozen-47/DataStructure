#include<iostream>
using namespace std;
int main(){
    int num , count = 0 , check;
    cout<<"Enter the integer  : ";
    cin>>num;
    int cpy = num;
    while(cpy != 0){
    check = cpy% 10;
    if(check != 0 && num % check == 0){
        count++;
    }
    cpy = cpy / 10;
    }
    cout<<count;
}
