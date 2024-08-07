//Q.No - 2.
#include<iostream>
using namespace std;
float ar(float p){
    float s = 3.1415 * p * p;
    return s;
}

int main(){
    float r;
    cout<<"Enter Radius : ";
    cin>>r;

    cout<<"Area Of A Circle Is : "<<ar(r);
}