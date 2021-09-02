//
//  main.cpp
//  Lab 2
//
//  Created by Evan Toland on 2/2/21.
//  Copyright © 2021 Evan Toland. All rights reserved.
//

#include <iostream>
using namespace std;

double callByValue(double length, double width, double height)
{
    return length * width * height;     // w/o return it
}

/*
double callByValue(double length, double width, double height)
{
    double r = length * width * height;
   return r;                            // with return int
}
*/
/*
void callByRef(double& length, double& width, double& height, double& result)
{
    result = length * width * height;
}
*/

void callByRef(int &n, int &factorial)
{
    for(int i=1;i<=n; ++i)
    {
        factorial *= i;
    }
}
void callByPoint(int* n, int* factorial){
    for(int i=1;i<= *n; ++i)
       {
           *factorial = *factorial * i;
       }
}

int main() {
    // insert code here...
    double z = callByValue(1, 5.8, 7.3);
    cout << "1 x 5.8 x 7.3 is " << z <<"\n";
    
    /*
     double  l=1.3,b=2.4,h=3.5,result=1;
    callByRef(l, b, h, result);
    cout<<"call by reference is " << result<<endl;
    */
    
    int n=3, factorial =1;
    callByRef(n, factorial);
    cout << "The call by reference for factorial is " << factorial <<"\n";
    
    int n2 = 3, factorial2=1;
    callByPoint(&n2, &factorial2);
    cout << "The call by pointer for factorial is " << factorial <<"\n";

    return 0;
}
