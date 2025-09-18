# include <iostream>
using namespace std;

int main (){
  
    int P ;
    cin>> P;
    cout<< "PRINCIPAL AMT:" << P << endl;
  
    int R;
    cin>> R;
    cout << "RATE OF INTREST" << R<< endl;
  
    int T;
    cin>>T;
    cout << "TIME" << T<< endl;
  
    float x;
    x = (P*R*T)/100.0;
    cout<< "SIMPLE INTEREST"<< x;

}
