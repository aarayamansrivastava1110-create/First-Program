#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;

    for(int i=n; i>=1;i--){
        for(int j =n-i;j>0;j--){
            cout<<" ";
        }
        for(int m =1;m<=i;m++){
            cout<<(m);
        }

        cout<<endl;
    }
}
