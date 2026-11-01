#include<iostream>
using namespace std;
void greatest(int a,int b,int c){
    if(a >= b && a >= c){
        cout<<a<<" is a greatest ";
    }
    else if(b >= a && b >= c){
        cout<<b<<" is a greatest ";
    }
    else {
        cout<<c<<" is a greatest ";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    greatest(a,b,c);

}   