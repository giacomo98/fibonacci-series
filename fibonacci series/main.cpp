//
//  main.cpp
//  fibonacci series
//
//  Created by giacomo baruzzi
//
//
#include <iostream>
#include <cmath>

using namespace std;

//method for calculate the fibonacci series

int fibonacci(int n) {
    const double phi = (1.0 + sqrt(5.0)) / 2;
    const double psi = -1.0 / phi;
    
    return(pow(phi, n) - pow(psi, n)) / sqrt(5.0);
    
}

// apply the method and print the results

int main () {
    for( int p = 1; p<10; p++)  {
        cout << fibonacci(p) << endl;
    }
  
}