#include <iostream>

using namespace std;

int main()
{
    double totalCost,salary,yearlyRent,electricityCost;

    cout << "enter the total cost of the merchandise"<<endl;
    cin>>totalCost;

    cout<< "enter the salary of the employees including your salary"<<endl;
    cin>>salary;

    cout<< "enter the yearly rent"<<endl;
    cin>>yearlyRent;

    cout<< "enter the electricity cost"<<endl;
    cin>>electricityCost;


     double totalExpenses = totalCost+salary+yearlyRent+electricityCost;
     double desiredNetProfit=totalCost*0.1;
     double newNetProfit=desiredNetProfit/0.85;
     double markUp=(newNetProfit/totalExpenses)/totalCost;

     cout<<"the markup is "<<markUp<<endl;

    return 0;










}
