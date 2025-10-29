#include<iostream>
using namespace std;
int main(){
    int num , rev = 0, rem;
    cout<<"Enter the integer : ";
    cin>>num;
    int cpy = num;
    while(cpy != 0){
     rem = cpy % 10;
     rev = (rev*10)+rem;
     cpy /= 10;
    }
    cout<<rev;
}
