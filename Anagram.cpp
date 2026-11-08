#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isAnagram(string s, string t){
    if(s.length() != t.length()) return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s == t;
}   // HAVING TIME COMPLEXITY 0(n Log(n))
int main (){
    string s,t;

    cout<<"Enter First String : ";
    getline(cin,s);

    cout<<"Enter Second String : ";
    getline(cin,t);

    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}