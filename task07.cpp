#include <iostream>
using namespace std;
main(){
string name;
int adult_p,child_p,n_adult,n_child,price_child_sold,price_adult_sold,total ;
float per,amount_after_donate,donate;


cout<<"Enter Movie Name:";
cin >> name;
cout<<"Enter Adult Ticket Price:";
cin >> adult_p;
cout<<"Enter Child Ticket Price:";
cin >> child_p;
cout<<"Enter Number of Adult Ticket Sold:";
cin >> n_adult;
cout<<"Enter Number of Child Ticket Sold:";
cin >> n_child;
cout<<"Enter percentage to donate:";
cin >> per;

price_adult_sold = n_adult*adult_p;
price_child_sold = n_child*child_p;

total = price_adult_sold + price_child_sold;
donate = (per/100)*total;

amount_after_donate = total-donate;
cout<<"Total Amout Generated:"<<total <<endl;
cout<<"Amount after Donation:"<<amount_after_donate;


}