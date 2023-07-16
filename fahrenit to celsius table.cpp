Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value in integer form. The Fahrenheit value and its corresponding Celsius value should be separate by single space.
Constraints :
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 

#include<iostream>
using namespace std;
int main()
{
    int start,end,step;
    cin>>start >> end >> step ;
    int fahrenhitvalue = start ;
    while(fahrenhitvalue <=end)
    {
        int celsiusvalue = (int)((5.0 / 9) * (fahrenhitvalue- 32 ));
        cout << fahrenhitvalue << " " << celsiusvalue << endl;
        fahrenhitvalue = fahrenhitvalue + step;
    }
}