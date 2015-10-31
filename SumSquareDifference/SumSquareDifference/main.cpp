//
//  main.cpp
//  SumSquareDifference
//
//  Created by Alan Pham on 10/30/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

/*
 The sum of the squares of the first ten natural numbers is,
 
 12 + 22 + ... + 102 = 385
 The square of the sum of the first ten natural numbers is,
 
 (1 + 2 + ... + 10)2 = 552 = 3025
 Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 
 Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

#include <iostream>
int sumOfSquares(){
    int sum = 0;
    for (int i =1; i < 101; i++){
        sum += (i*i);
    }
    return sum;
}

int squareOfSums(){
    int sum = 0;
    for (int i = 1; i < 101; i++){
        sum += i;
    }
    return (sum*sum);
}

int main(int argc, const char * argv[]) {
    
    std::cout << "Difference: " << squareOfSums() - sumOfSquares() << std::endl;
    return 0;
}
