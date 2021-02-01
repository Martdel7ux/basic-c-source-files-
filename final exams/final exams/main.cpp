//
//  main.cpp
//  final exams
//
//  Created by MARTIN AHOTO on 14/01/2021.
//

#include <iostream>

using namespace std;

//declare function
void Divisible(int& n, int& k);

void readdata(int&n, int&k)


{
    
    
    //bool function to check if n is a prime number
    bool isPrime(n);
    {
        bool flag = true;
        for(int i = 2; i <= n / 2; i++) {
           if(n % i == 0) {
              flag = false;
              break;
           }
        }
        
    }
    
    //prompt user to enter the numbers here
    cout<<"enter the numbers here:"<<endl;
    cin>>n>>k;
    
    //introducing a while loop to check if number is positive and prompts the user to reenter the number if the number isnt positive
     while(n&&k >'0')
     {
         //prompt user to reenter positive integer if the number isnt positve
         cout<<"the number is not positive"<<endl;
         cin>>n>>k;
         
     }
    
    //check if number is divisible by k
    if(n % k == 0)
    {
        cout<<"n"<<n<<"is divisible by k"<<k<<endl;
    }
    else
        cout<<"n"<<n<<"is not divisible by"<<n<<endl;
    
}

    int main()
{
 // declare variables
    int x =0, y=0;
    int z = x % y;
    
    //call functions
    Divisible(x,y);
    
    //output result to the user
    cout<<"the result is"<< z <<endl;
    
    return 0;
    }




