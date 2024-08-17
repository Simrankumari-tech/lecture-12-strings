#include<iostream>
using namespace std;
void update(string &x){
    x = " hello " ;
    cout << "inside update : " << x << endl;
}
int main(){
string s = "world";
cout << "before update : " << s<< endl;
update(s);
cout << "after update : " << s << endl;

    return 0;
}