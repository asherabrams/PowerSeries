//
//  main.cpp
//  PowerSeries
//
//  Created by Asher Abrams on 2018/02/06.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//  
// 

// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
int x;
double y, sum;
double func01(int);

// DEFINITIONS
double func01(int x)
{
    for(x = 1; x <= 20; x++)
    {
        y = pow(2, -x);
        sum = sum + y;
        cout << y << '\n';
        cout << sum << '\n';
        cout << '\n';
    }
    return y;
}

// MAIN
int main(int argc, const char * argv[]) {
    func01(x);
    return 0;
}
