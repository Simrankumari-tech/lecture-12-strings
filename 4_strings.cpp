#include<iostream>
using namespace std;
int main(){
string s;
s = "hello";
cout << s << endl;
s= "coding";
cout << s<< endl;
for(int i= 0; i< s.size() ; i++){
    cout << s[i] << " ";
}
cout << endl;

//concatenation
string s1= "conding";
string s2= " blocks";
cout << s1+ s2;

    return 0;
}