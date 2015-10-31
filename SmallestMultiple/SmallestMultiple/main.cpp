//
//  main.cpp
//  SmallestMultiple
//
//  Created by Alan Pham on 10/30/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//
/*
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <iostream>
bool isSmallestMultiple(int a){
    int count = 0;
    for (int i = 1; i < 21; i++){
        if (a % i == 0){
            count++;
        }
        else{
            break;
        }
    }
    
    if (count == 20){
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, const char * argv[]) {
    
    // Set answer to 20 for starting number.
    int answer = 20;
    
    while (true){
        if (isSmallestMultiple(answer)){
            break;
        }
        // Add 2 after each loop.
        answer += 2;
    }
    
    std::cout << "Smallest Multiple: " << answer << std::endl;
    
    return 0;
}
