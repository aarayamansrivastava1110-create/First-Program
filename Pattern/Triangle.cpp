#include <iostream>
using namespace std;

int main(){
    int n,l,k;
    cout<<" PLEASE ENTER NUMBER OF ROWS: "<<endl;
    cin>>n;

    for(l = 1; l<=n;l++){
        for (k = 1; k<=l;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
