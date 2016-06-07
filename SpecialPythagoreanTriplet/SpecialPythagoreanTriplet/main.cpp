//
//  main.cpp
//  SpecialPythagoreanTriplet
//
//  Created by Alan Pham on 10/31/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

#include <iostream>

using namespace std;

bool isSpecialTriplet(int a, int b, int c){
    return ((a+b+c)==1000) ? true : false;
}

int main(int argc, const char * argv[]) {
    int m = 1, n = 2;
    int a, b, c;
/*
    while(m < n){
        //a = (n*n) - (m*m);
        //cout << a << endl;
        
        b = 2*m*n;
        cout << b << endl;
        //c = (n*n) + (m*m);
        //cout << c << endl;
        if (isSpecialTriplet(a, b, c))
            break;
        //cout << m << " " << n << endl;
        n += 1;
        m += 1;
    }
*/
    cout << "Product of Pythogorean Triplet: " << a*b*c << endl;
    return 0;
}
