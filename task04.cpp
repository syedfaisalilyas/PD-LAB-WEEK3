#include <iostream>
using namespace std;
main(){
string name;
int mark1,mark2,mark3,mark4,mark5;
float per;

cout<<"Enter your name: ";
cin>> name;
cout<<"Enter subject 01 Marks:";
cin>>mark1;
cout<<"Enter subject 02 Marks:";
cin>>mark2;
cout<<"Enter subject 03 Marks:";
cin>>mark3;
cout<<"Enter subject 04 Marks:";
cin>>mark4;
cout<<"Enter subject 05 Marks:";
cin>>mark5;

per = (mark1+mark2+mark3+mark4+mark5)/500*100;

cout<<"The Student "<<name<<" percentage is"<<per;
}