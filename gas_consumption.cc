/*
   Student Name: Ayshah Aljedani
   Date: 22.05.19
   description: this program  will calculate the gas consumption for trip given
   the number of miles driven in town and on the highway.

*/



#include  <iostream>
using namespace std;

// the const variables
const double avg_mile_intown = 22.5;
const double avg_mile_onhighway = 29.5;

int main (int argc, char const *argv[]){
    
    // variables declaration
    double mile_intown = 0.0;
    double mile_onhighway = 0.0 ;
    double total_miles = 0.0;
    double total_gas = 0.0;
    double gas_cons_intown = 0.0;
    double gas_cons_onhigh = 0.0;
    double avg_mpg = 0.0;

    // asking the user to enter the intputs
    cout << " Enter the number of miles driven in town: ";
    cin >> mile_intown;

    cout << " Enter the number of miles driven in the highway: ";
    cin >> mile_onhighway;

    cout<<"------------------- Gas consumption -----------------------"<< endl;
    cout << " The number of miles driven in town: "<< mile_intown <<" miles"<<endl;
    gas_cons_intown = mile_intown / avg_mile_intown; // calculate the gas consumption in town.
    cout << " The gas consumption for town driving: " << gas_cons_intown <<" gallons" <<endl;
    cout << " The number of miles driven in the highway: "<< mile_onhighway<<" miles"<< endl;
    gas_cons_onhigh = mile_onhighway / avg_mile_onhighway; // calculate the gas consumption on highway.
    cout << " The gas consumption for highway driving: " << gas_cons_onhigh << " gallons" << endl;
    total_miles = mile_intown + mile_onhighway; // calculate the total mailes.
    cout << " The total miles driven: "<< total_miles << " miles" << endl;
    total_gas = gas_cons_intown + gas_cons_onhigh; // calculate the total gas.
    cout << " The total gas consumption: "<< total_gas << " gallons"<< endl;
    avg_mpg = total_miles / total_gas; // calculate the average mpg.
    cout << " The average mpg for the trip: "<< avg_mpg << " miles/gallon" << endl;
    cout << "------------------------------------------------------------"<<endl;
    return (0);

}