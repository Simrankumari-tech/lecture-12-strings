#include<iostream>
using namespace std;
int main(){
string s[5];
s[0]= "hello" ;
s[1]= "man" ;
s[2]= "people" ;
s[3]= "our" ;
s[4]= "we" ;
for(int i= 0; i<5 ; i++){
cout << s[i] << " ";

cout << endl;
}
// another way
for(int i= 0; i<5 ; i++){
for(int j= 0; j<s[i].size() ; j++){
cout << s[i][j]<< " ";
}
cout << endl;

}
    return 0;
}