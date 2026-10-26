//walking example
#include<iostream>
using namespace std;
void reachHome(int src, int destination){
    //base case
    if(src==destination){
        cout<<"Reached Home" <<endl;
        return;
    }
    //Recursive call
    reachHome(src+1,destination);
    
}

int main(){
    int destination=10;
    int src=1;
    reachHome(src,destination);

}