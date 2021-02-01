//
//  main.cpp
//  income tax
//
//  Created by MARTIN on 02/01/2021.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    //declare variables
    string first_name;
    string last_name;
    
    int revenue_ID;
    
    int yearly_salary;
    
    //prompt user to input his or her initials
    cout<<"PLEASE INPUT YOUR FIRST NAME:"<<endl;
    cin>>first_name;
    
    cout<<"PLEASE INPUT LAST NAME:"<<endl;
    cin>>last_name;
    
    //prompt user to input his or her social security number
    cout<<"INPUT REVENUE ID:"<<endl;
    cin>>revenue_ID;
    
    //prompt user to input his or her yearly salary
    cout<<"INPUT YEARLY SALARY:"<<endl;
    cin>>yearly_salary;
    
    
    
    double social_insuarance_contribution = 0.0;
    
    //compute algorithm for social insuarance
     social_insuarance_contribution = yearly_salary * 0.063;
    
    
    //introducing a while loop to alter a code if the wrong input is read
    while(yearly_salary < 0)
    {
        
        
      
        
        
        //prompt user the entered score is invalid if the score is invalid
        cout<<"THE ENTERED SCORE IS INVALID PLEASE TRY AGAIN!"<<endl;
        cin>>yearly_salary;
    
    
    
    //check the amount of salary
    if (yearly_salary <= 19500)
        {
        
            //compute algorithm for income tax
          double  income_tax = yearly_salary * 0;
            
            //display income tax to the user
            cout<<"INCOME TAX:"<<income_tax;
    }
    //check the amount of yearly salary
    if(yearly_salary > 19501 & yearly_salary <=28000)
    {
        //compute the algorithm for income tax
        double income_tax = (yearly_salary-19500) * 0.2;
        
        //display income tax to the user
        cout<<"INCOME TAX IS:"<<income_tax<<endl;
    }
    
    //check the amount of yearly salary
    else if( yearly_salary > 28001 & yearly_salary <= 36300)
    {
        
        //compute the algorithm for income tax
        double income_tax = (yearly_salary - 19500)* 0.25;
        
        //display income tax to the user
        cout<<"INCOME TAX IS:"<<income_tax<<endl;
    }
    
    //check the amount of yearly salary
    if(yearly_salary > 36300)
    {
        //compute algorithm for income tax
        double income_tax = (yearly_salary - 19500)* 0.30;
        
        //display income tax to the user
        cout<<"INCOME TAX:"<<income_tax<<endl;
    }
}
    
    //compute algorithm for social insuarance
     social_insuarance_contribution = yearly_salary * 0.063;
    
    
    
    
    
    //display to the user the social insuarance fee
    cout<<first_name<<last_name<<"  with social insurance ID number: " << revenue_ID << " has to pay  "<<social_insuarance_contribution<<" EUROS"<<endl;

    
    
    return 0;//retur the code
}

