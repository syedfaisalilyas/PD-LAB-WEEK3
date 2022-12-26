#include <iostream>
using namespace std;
main(){
float vf,vi,a,t;

cout<<"Enter the inital velocity: ";
cin >> vi;

cout<<"Enter the acceleration: ";
cin >> a;

cout<<"Enter the time: ";
cin >> t;

vf = (vi + a*t);

cout << "The final velocity of the toy is:" << vf << " m/s";


}