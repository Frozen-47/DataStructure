#include<iostream>
using namespace std;
int main(){
    int Sample_number;
    bool isEven = false;
    cout<<"Enter a Number to Find it (Even or Odd):";
    cin>>Sample_number;
    if(Sample_number % 2 == 0)
      isEven = true;
    if(isEven == true){
        cout<<Sample_number<<" is Even";
    }
    else{
        cout<<Sample_number<<" is Odd";
    }
    return 0;
}
