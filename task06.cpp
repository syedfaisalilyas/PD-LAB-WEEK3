#include <iostream>
using namespace std;
main(){
int bag_size,cost,area,fer_per_pound,fer_per_feet;


cout<<"Enter the bag size in Pounds:";
cin>>bag_size;
cout<<"Enter cost of the bag:";
cin>>cost;
cout<<"Enter area covered by each bag in square feet:";
cin>>area;

fer_per_pound = cost/bag_size;
fer_per_feet = cost/area;

cout << "Cost of the fertilizer per pound : " << fer_per_pound <<endl;
cout << "Cost of fertilizing the area per square feet : " << fer_per_feet;


}