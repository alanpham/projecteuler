//
//  main.cpp
//  10001stPrime
//
//  Created by Alan Pham on 10/30/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

/*
 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 
 What is the 10 001st prime number?
 */

#include <iostream>
#include <math.h>

bool isPrime(int num){
    if (num <= 1)
        return false;
    else if (num == 2)
        return true;
    else{
        int divisor = 2;
        int limit = static_cast<int>(sqrt(num)) + 1;
        while (divisor <= limit){
            if (num % divisor == 0){
                return false;
            }
            divisor += 1;
        }
        return true;
    }
}

int main(int argc, const char * argv[]) {
    int prime = 2;
    int maxPrime = 0;
    int count = 0;
    while (count < 10001){
        if (isPrime(prime)){
            std::cout << prime << std::endl;
            maxPrime = prime;
            count++;
            prime++;
        }
        else{
            prime++;
        }
    }
    std::cout << "10001st Prime: " << maxPrime << std::endl;
    return 0;
}
