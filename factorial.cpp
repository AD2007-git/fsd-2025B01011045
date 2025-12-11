//to find factorial
#include <iostream>
using namespace std;
int main(){
    int i , fac ;
    cout << "enter the number for factorial:";
    cin>> i;
    fac = 1;
    while ( i>=1){
        fac = fac*i;
        i=i-1;
    }
    cout << "facorial of number:" << " " << fac << endl;
    return 0;

}
