#include<iostream>
#include<string>
using namespace std;
int main(){
    string x ;
    cout<<"Enter a String"<<endl;
    getline(cin,x);
    int n = x.size();
    int count = 0;
    for(int i=0;i<=n;i++){
        if(x[i] == 'a') count++;
        else if(x[i] == 'e') count++;
        else if(x[i] == 'i') count++;
        else if(x[i] == 'o') count++;
        else if(x[i] == 'u') count++;
        else if(x[i] == 'A') count++;
        else if(x[i] == 'E') count++;
        else if(x[i] == 'I') count++;
        else if(x[i] == 'O') count++;
        else if(x[i] == 'U') count++;
    }
    cout<<count;
}

