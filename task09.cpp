#include <iostream>
using namespace std;
main(){
int num1,num2,num3,num01,num02,num03,num04,sum;
cout<<"Enter four digit number:";
cin>>num1;

num01=num1%10;
num2=num1/10;
num02=num2%10;
num3=num2/10;
num03=num3%10;
num04=num3/10;

sum = num01+num02+num03+num04;
cout<<"Sum:"<<sum;
}