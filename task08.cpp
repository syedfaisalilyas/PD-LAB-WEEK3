#include <iostream>
using namespace std;
main(){
int kg_veg,kg_fruit;
float veg_p,fruit_p,veg_cost,fruit_cost,total_cost,rupee_cost;

cout<<"Enter the vegetable price per kilogram:";
cin >>veg_p;
cout<<"Enter the fruit price per kilogram:";
cin >>fruit_p;
cout<<"Enter the total kilograms of vegetable:";
cin >>kg_veg;
cout<<"Enter the total kilograms of fruit:";
cin >>kg_fruit;

veg_cost = kg_veg*veg_p;
fruit_cost = kg_fruit*fruit_p;

total_cost =fruit_cost+veg_cost;

rupee_cost = total_cost/1.94;

cout<<"The earning of all the fruits and vegetables in Rps is" << rupee_cost;

}