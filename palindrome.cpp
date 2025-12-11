// check if it is a palindrome number or not palindrome means number like 121 or 212
#include <iostream>
using namespace std;
int main(){
    int i , num , rev=0;
    cout << "Enter the number :" ;
    cin>> i;
    num = i;//we did this kyunki loop me jab ham kisi number ko 0 kardete he jaisa 231 ko 0 kar diya to 231 ki ab koi value nhi he to ham use dusre int me save kardeta jise wo value rahe atleast hamare pass
    while( i>0){
        rev = (rev*10)+i%10;//i%10 jab karte he to number ka last digit answere hota he jaisa 121%10=1 matlab module 10 kardo
        i=i/10;// jab bhi koi number 10 se devide hota he to uska last digit hat jata he jaisa 121/10 = 12 12/10=1
    }
    if(rev==num){
        cout << "Number is pelindrome"<< endl;
    } else {
        cout << " Number is not a pelindrome"<<endl;
    }
    return 0;
}