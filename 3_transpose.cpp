#include<iostream>
using namespace std;
int main(){
int a[][4] = {
     {1,2,3,4},
    {5,6,10,15},
    {7,11,13,16},
    {9,12,14,20}
};
int n=4, m=4;
for(int i=0 ; i<n; i++){
    for(int j = i+1; j<m ; j++){
        swap(a[i][j] , a[j][i]);
    }
}
for(int i= 0; i<n ; i++){
    for(int j =0; j<m ; j++){
        cout << a[i][j] << " ";
    }
    cout << endl;
}


    return 0;
}