//
//  main.cpp
//  project 1 cellular phone billing.
//
//  Created by MARTIN AHOTO on 24/12/2020.
//

    
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    //declare variables
    int regular_minutes_used=0, premium_day_minutes=0, premium_night_minutes=0;

    float service_charges = 0.0 ;

    char serviceCode;
    
    // declare variable constants
    const double regular_account_fee = 10.00;
    const double regular_rate = 0.20;
    
    const double premium_day_rate = 0.10;
    const double premium_night_rate = 0.05;

    // prompt user to input the type of service code
    cout << "Enter service code r or R (Regular Service) and p or P (Premium Service): ";
    cin >> serviceCode; //input type of service code

    //introducing switch statememnts to execute set of codes for the type of service
    switch (serviceCode)
    {
       //switch statemnts to execute codes for regular services
    case 'r':
    case 'R':
        
           //prompt user to enter number of minutes the telephone service is used.
            cout << "Enter the number of minutes the telephone service is used: ";
            cin >> regular_minutes_used; //input number of minutes
            
            //check the type of service code
            if(serviceCode=='r'||'R')
            {
                //prompt the user the type of service code he entered
                cout<<"TYPE OF SERVICE: REGULAR"<<endl;
                
                
                
            }
            
            // check duration a regular service code has been used
        if (regular_minutes_used > 50)
        {
            // compute service charge for regular service if the number of minutes exceed 50 minutes.
            service_charges = (regular_minutes_used - 50) * regular_rate + regular_account_fee;
        }
        else
        {
            // compute service charge for regular account
            service_charges = regular_account_fee;
        }
            cout<<"MINUTES USED:"<<" "<<regular_minutes_used<<endl;
            
        break; //end of switch statement for regular services
           
            
    //switch statement to execute codes for premium services
    case 'p':
    case 'P':
        
            //prompt user to enter the number of minutes telephone number was used during the day
        cout << "Enter the number of minutes the telephone number was used during the day: ";
        cin >> premium_day_minutes; // input premium day minutes
            
            //prompt user to enter the number of minutes the telephone number was used at night
            cout<<"Enter the number of minutes the telephone was used during the night:"<<endl;
            cin>>premium_night_minutes; // input premium night minutes
            
            //check the type of service code
           if(serviceCode=='P'||'p')
           {
               // prompt user the type of service code he or she chose
               cout<<"TYPE OF SERVICE: PREMIUM"<<endl;
           }
        
            service_charges = 25;
            
            //check duration a service code has been used during the day
            if (premium_day_minutes > 75)
        {
            
            // compute service charges for premium day minutes
            service_charges += (premium_day_minutes - 75)  * premium_day_rate;
        }

            // check the duration a premium service code has been used at night
        if (premium_night_minutes > 100)

        {
            // compute service charge for premium night minutes
            service_charges += ( premium_night_minutes-100) * premium_night_rate;
            
            //compute total number of minutes a premium service has been used
            int total_duration = premium_day_minutes + premium_night_minutes;
            
            
            //outputs total number of minutes to the user
                cout<<"MINUTE USED:"<<setw(5)<<total_duration<<endl;
                
                
            
        }
        
           break; //end of codes for switch statement for premium services

    default:
          //prompt the user the input is not valid when he or she inputs any other letter aside p or P and r or R
            cout << "YOUR SERVICE CODE IS INVALID !"<<endl;
        return 1;
        break; //end of switch statement
    }

    //outputs total service charge to the user
cout << "Service charges: " << service_charges <<" "<<  "Euros" << endl;

    
    //outputs message of appreciation to the user.
    cout<<"THANK YOU FOR CHOOSING US!"<<endl;


    return 0;
}

