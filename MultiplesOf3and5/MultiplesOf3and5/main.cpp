//
//  main.cpp
//  MultiplesOf3and5
//
//  Created by Alan Pham on 10/22/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

#include <iostream>

int main() {
    int sum = 0;
    int three = 3, five = 5;
    for (int i = 0; i < 1000; i++){
        if (i%3 == 0){
            sum += i;
        }
        else if (i%5 == 0){
            sum += i;
        }
    }
    
    std::cout << "The sum of all the multiples of 3 or 5 below 1000 is: " << sum << std::endl;
    return 0;
}
