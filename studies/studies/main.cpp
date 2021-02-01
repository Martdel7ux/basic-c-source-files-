//
//  main.cpp
//  studies
//
//  Created by MARTIN on 08/01/2021.
//

#include<iostream>
using namespace std;

int main()

{
    int salary_per_hour, number_of_hours;
    float weekly_salary, gross_salary;
    char kids;
    
    cout<<"PLEASE ENTER SALARY PER HOUR HERE:"<<endl;
    cin>>salary_per_hour;
    
    cout<<"HOW MANY HOURS DO YOU WORK A WEEK:"<<endl;
    cin>>number_of_hours;
    
    cout<<"HOW MANY KIDS DO YOU HAVE:"<<endl;
    cin>>kids;
    
    if(number_of_hours <=40)
    {
        gross_salary = salary_per_hour * number_of_hours;
    }
    
    else
    {
        double over_time = salary_per_hour * 1.5 * (number_of_hours - 40);
    
        gross_salary = 40 * salary_per_hour + over_time;
        
    }
    
    double social_security = 0.06 * gross_salary;
    double income_tax = 0.14 * gross_salary;
    const int Union = 10 ;
    const int health_insuarance = 35;
    weekly_salary = gross_salary - social_security - income_tax - Union;
    
    if(kids >= 2)
    {
        weekly_salary = weekly_salary - health_insuarance;
    }
    
    cout<<"YOUR WEEKLY SALARY IS"<< " " <<weekly_salary<<"euros"<<endl;
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
