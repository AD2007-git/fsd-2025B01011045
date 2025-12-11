#include <iostream> ;
using namespace std;
int main(){
 int nums[]= { 5,12,90,-76,-90 , 67,-87} ;
 int size = 7;
 int smallest= INT16_MAX;
 for ( int i = 0 ; i < size ; i++){
    if( nums[i]<smallest ){
        smallest=nums[i];

    }
 }
 return 0;
}
