#include <iosteam>
using namespace std;

int main (){
    int z;
    cout<<"Please enter a valid Year:"<<endl;
    cin>>z;
  
    if (z%4 == 0 && z%100 != 0 || (z % 400 == 0)){
        cout<<"Leap Year";
    }
      
    else{
        cout<<"Not A Leap Year";
    }
    return 0;

}
