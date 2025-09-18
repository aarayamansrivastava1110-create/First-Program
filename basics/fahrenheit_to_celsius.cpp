#include <iostream>
using namespace std;

// Converting Fahrenheit to celsius

int main (){
    float x;
    
    cout << "Temp given" << endl;
    cin >> x;
    
    float y;
    y = (x-32.0)*(5.0/9.0);
  
    cout << "temp converted" <<y <<endl ;
  
    return 0;

}
