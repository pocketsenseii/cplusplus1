/*
CCIS-241
Week 2
Assignment 1 
Miles per gallon of Gas 
–-----------------------------------------------------------------------------------------------------------------------------------------
A car with a 16-gallon gas tank averages 345 miles per tankful when driven in town and 460 miles per tankfulwhen driven on the highway. 
Write a program that calculates and displays the miles per gallon for one tank of gas when driven in town and when driven on the highway.
The MPG should have a data type of a double. 
MPG = Total number of Miles / Number of Gallons
–----------------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;
int main()
{
   // set variables as doubles
   double price, temp;
   
   // get retail price from user
   cout << "Type in the retail price and press enter: ";
   cin >> price;
   
   // get sales tax rate from user
   cout << "Type in the sales tax rate and press enter: ";
   cin >> temp;
   
   // change sales tax rate (temp) into percentage
   temp /= 100;
   
   // add 1 to sales tax rate (adjusted tax rate)
   temp++;
   
   // reassign price to equal total price (price * adjusted tax rate)
   price = temp * price;
   
   // display total to user
   cout << "The total price is $" << totalSalePrice << endl;
   
   system("pause");
   return 0;
}