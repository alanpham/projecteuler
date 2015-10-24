//
//  main.cpp
//  LargestPrimeFactor
//
//  Created by Alan Pham on 10/24/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

/*
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600851475143 ?
 */
#include <iostream>
#include <math.h>
using namespace std;

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
    // Largest prime factor.
    int64_t num = 600851475143;
    int largest_prime = 0;
    int temp = 0;
    
    int limit = static_cast<int>(sqrt(num)) + 1;
    
    while (temp < limit){
        if (isPrime(temp) && (num % temp == 0)){
            largest_prime = temp;
            temp += 1;
        }
        else{
            temp += 1;
        }
    }
    
    cout << "Largest Prime: " << largest_prime << endl;
    
    return 0;
}
