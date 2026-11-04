//armstrong number
#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int sumOfCubes=0;
    while(n!=0){
        int digit= n%10;
        sumOfCubes= sumOfCubes + (digit* digit* digit);
    n= n/10;
    }

}
int main(){
    int n ;
    cin>>n;
    if(isArmstrong){
        cout<<"This is armstrong number"<<endl;
    }
    else{
        cout<<"This is not armstrong number"<<endl;
    }

}