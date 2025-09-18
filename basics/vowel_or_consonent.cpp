#include <iostream>
using namespace std;

int main (){
    char a;
    cout<<"Please Enter Character:""\n";
    cin>>a;
  
    if (!isalpha(a)){
        cout<<"Not a letter";
    }
      
    else if (a == 'a' || a== 'i' || a == 'e'|| a == 'o' || a== 'u' || a=='A' || a== 'E' || a=='I' || a== 'O' || a=='U'){
        cout<<"VOWEL";
    }
      
    else{
        cout<<"CONSONENTS";
    }
  
    return 0;
}
