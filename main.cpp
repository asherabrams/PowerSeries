//
//  main.cpp
//  PowerSeries
//
//  Created by Asher Abrams on 2018/02/06.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//

// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
int i;
double y, sum;
double func01(int);

// DEFINITIONS
double func01(int i)
{
    for(i = 1; i <= 20; i++)
    {
        y = pow(2, -i);
        sum = sum + y;
        cout << y << '\n';
        cout << sum << '\n';
        cout << '\n';
    }
    return y;
}

// MAIN
int main(int argc, const char * argv[]) {
    func01(i);
    return 0;
}
