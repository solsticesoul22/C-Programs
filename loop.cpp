#include <iostream>
using namespace std;

int main(){
    for(int number=0;number<=100;number++){


    if(number%3==0){
         continue;
}
    else{
        cout<<number<<endl;
    }
    }
    return 0;
}