//
//  main.cpp
//  income tax project 2
//
//  Created by MARTIN AHOTO on 08/01/2021.

#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

//declare function for social insurance contribution
void socialInsurance(int anual_salary)
{
    // Declare variables
   double social_insurance_contribution;

    
    //intriducing while loop to execute code if the statement is true
   while (anual_salary < 0)
   {
       
       //prompt the user the entered is invalid if he she inputs an incrrect figure and asks to reenter the figure.
       cout << "THE ENTERED SCORE IS INVALID! PLEASE TRY AGAIN" << endl;
       cin >> anual_salary;
   }
   // compute the algorithm for social insuarance contibution
    social_insurance_contribution = anual_salary * 0.063;

    //Display social insuarnce contribution to the user
    cout << "Social insurance contribution: " << social_insurance_contribution << endl;
} //end of while loop


//declaration of function for income tax
void incomeTax(int anual_salary)
{
    
    //declare variable for total amount to be paid
    double total_amount;

    //introducing a loop to execute the code if statement is true
    while (anual_salary < 0)
    {
        //prompt user the entered score is invalid and asks user to reenter a correct score
        cout << "THE ENTERED SCORE IS INVLID! PLEASE TRY AGAIN:" << endl;
        cin >> anual_salary;
    }

   //check if anual salary is less or equal to 19500 and execute the algorithm of the code
     if (anual_salary <= 19500)
    {
        //compute algorithm for the total amount the user has to pay as tax
        total_amount = anual_salary;
        
    }

    // check if anual salary is greater than 195001 or less or equal to 28000
     else if (anual_salary > 195001 || anual_salary <= 28000)
    {
        //compute algorithm for the total amount due as tax for the user
        total_amount = (anual_salary - 19500) * 0.2;
        
    }

    //check if anual salary is greater than 28001 or less or equal to 36300
    else if (anual_salary > 28001 || anual_salary <= 36300)
    {
        //compute algorithm for the total amount user has to pay as tax
        total_amount = (anual_salary - 19500) * 0.25;
        
    }
    //check if anual salary is greater than 36300
     if (anual_salary > 36300)
    {
        //compute algorithm for total taxable income of the user
        total_amount = (anual_salary - 19500) * 0.3;
       
    }
    
    //displays total taxable income of the user to the console
     cout << "Income Tax: " << total_amount;

    } //end of function for the income tax

int main()
{
    //Declare variables
    string first_name, last_name;
    
    int Social_Insurance_Number, anual_salary;;

    //prompt user to input his or first name
    cout << "PLEASE ENTER FIRST NAME HERE: ";
    cin>>first_name;

    
    //prompt user to input his or her last name
    cout << "PLEASE ENTER LAST NAME HERE: ";
    cin>>last_name;

    
    //prompt user to input his or her national insuarance
    cout << "WHAT IS YOUR NATIONAL INSURANCE NUMBER: ";
    cin >> Social_Insurance_Number;

    
    //prompt user to input his or her anual salary
    cout << "WHAT IS YOUR ANUAL INCOME: ";
    cin >> anual_salary;

    
    //display the users initails and the amount he or she has to pay as social insuarnce contribution and income tax to the console
    cout << first_name <<"  " << last_name << " with national insurance number " << Social_Insurance_Number <<endl;
    cout<<" has to pay: " << endl;

    
    //call functions
    
    socialInsurance(anual_salary);
    
    incomeTax(anual_salary);

    return 0;
}









































