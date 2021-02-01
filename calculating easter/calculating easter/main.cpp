//
//  main.cpp
//  calculating easter
//
//  Created by MARTIN on 08/01/2021.
//

#include<iostream>
using namespace std;
int main()
{
    
    //declare variables
    int year, date, month;
    int a, b, c, d, e, f, g, h, i, j, k, m, p;
    
    //introduce a do while to execute block of codes
    do {
        
        //prompt user to input the year
        cout<< "PLEASE ENTER THE YEAR"<<endl;
        cin >> year;
       
        
       
        //compute algorithm for the golden number of years
        a=year%19;
        b=year/100;
        c=year%100;
        d=b/4;
        e=b%4;
        f=(b+8)/25;
        g=(b-f+1)/3;
        h=((19*a)+b-d-g+15)%30;
        i=c/4;
        j=c%4;
        k=(32+(2*e)+(2*i)-h-j)%7;
        m=(a+(11*h)+(22*k))/451;
        month=(h+k-(7*m)+114)/31;
        p=(h+k-(7*m)+114)%31;
        date=p+1;
        
        //displays the easter date to the console of the user
        cout << "Easter Day in" << " " << year << " " << "is"  << "/" << date  << "/" << month << "/" << year;
        
    }
    
    //introducing while loop to to execute blockof codes in the loop
    while (year>=0001&&year<=5000);
    
    
    return 0;
    
   
}
