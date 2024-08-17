#include<iostream>
using namespace std;

void spiralprint(int a[][100], int n , int m){
    int sr , er , sc , ec;
    sr= sc= 0;
    er=n-1;
    ec= m-1;
    while(sr<=er and sc<= ec){
        //1. print sr form sc to ec
        for(int col=sc; col<=ec; col++){
            cout << a[sr][col] << " ";
        }
        sr++;
        //2. print ec from sr to er
        for(int row=sr; row<= er; row++){
            cout << a[row][ec]<< " ";

        }
        ec--;
        //3. print er form ec to sc
        if(er>=sr){
        for(int col=ec; col>=sc; col--){
            cout << a[er][col]<< " ";
        }
        er--;
        }
        //4. print sc from er to sr
        if(ec>=sc){
        for(int row =er; row>=sr; row--){
            cout << a[row][sc]<< " ";
        }
        sc++;
    }
    }
}
int main(){
int a[100][100];
int rows,cols, number=1;
cin >> rows >> cols;
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        a[i][j]= number++;
    }
}
spiralprint(a,rows,cols);
    return 0;
}