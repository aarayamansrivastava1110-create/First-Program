#include <iostream>
using namespace std;

int main(){
    int p,q,r;
    cout<<" PLEASE ENTER NUMBER OF ROWS: "<<endl;
    cin>>p;  
    
    for(q=p;q>=1;q--){
        for (r =q;r>0;r--){
            cout<<"*";
        }
        cout<<endl;
    }
}
