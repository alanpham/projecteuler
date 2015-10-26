//
//  main.cpp
//  LargestPalindromicProduct
//
//  Created by Alan Pham on 10/24/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

#include <iostream>
#include <bitset>

using namespace std;

bool isPalindrome(int num){
    int dupe = num;
    int numDigits;
    
    // Find number of digits.
    do{
        ++numDigits;
        dupe /= 10;
    }while(dupe);
    
    cout << numDigits << endl;
    int reverse[numDigits];
    int reverseIndex = numDigits - 1;
    int temp;
    int base = 10;
    for (int i = 0; i < numDigits; i++){
        temp = num;
        
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    //int largestNum = 1000000;
    int palindrome = 0;
    int current_num;
    
    
    /*
    while (largestNum > 10000 && largestNum < 1000001){
        if (isPalindrome(largestNum))
            break;
        else
            largestNum -= 1;
    }
    */
    
    /*
    for (int i = 100; i < 1000; i++){
        for (int j = 100; j < 1000; j++){
            current_num = i*j;
            if (isPalindrome(current_num) && (current_num) > palindrome){
                palindrome = current_num;
            }
        }
    }
    */
    
    isPalindrome(1000);
    
    cout << "Largest Palindrome: " << palindrome << endl;
    return 0;
}
