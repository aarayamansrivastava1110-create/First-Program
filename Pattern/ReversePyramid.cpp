#include <iostream>
using namespace std;

int main(){
    int n ,m;
    cout<<"enter number of rows ";
    cin>>n;
    int k=0;
    for (int i =n; i>=1;i--){
        for(int j =1 ;j<=k; j++){
            cout<<" ";
        }
        for(int m = (2*i) -1; m>0; m--){
            cout<<"*";
        }        
        cout<<endl;k++;
    }
}
