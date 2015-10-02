#include <iostream>
using namespace std;

int main ()
{
int month = 1; double a_demand; double forecast = a_demand; double a = 0.1; double prediction; 
    while(month <= 12)
    {
        cout<<"Enter Actual Demand "<<month<<":";
        cin>>forecast;
        month++;
        
        if(forecast <= 1)
        cout<<"The Forecast is: ";
        
        else (prediction = a*a_demand+(1-a)*forecast);
        cout<<"Forecast: "<<prediction<<endl;
        
    }
return 0;
}
