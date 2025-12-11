// create a fibonacci series 
#include <iostream>
using namespace std;
int main(){
    int n , x , y ,z;
    cout << " Enter the Minimum number for fibonacci series:";
    cin>>n ;// n matlab ki last tak kitna jaana chahiye series
    x=0;
    y=1;
    z=0;
    while(z<=n){
        cout <<"\n"<<z; // hamesha \ ye use karne na ki / ye
        x=y;
        y=z;
        z=x+y;
    }
    return 0;


}
// for for loop th code
//  int n , x , y ,z;
   // cout << " Enter the Minimum number for fibonacci series:";
   // cin>>n ;// n matlab ki last tak kitna jaana chahiye series
  //  x=0;
   // y=1;
   // for ( int z=0 ; z,=n ; z=x+y){
   //cout <<"\n"<<z;
   //x=y
   //y=z}