//
//  main.cpp
//  SumOfPrimes
//
//  Created by Alan Pham on 10/22/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

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

int main() {
    int64_t sum = 0;
    clock_t begin = clock();
    for (int i = 0; i < 2000000; i++){
        if (isPrime(i)){
            sum += i;
        }
    }
    clock_t end = clock();
    cout << sum << endl;
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    cout << elapsed_secs << endl;
    return 0;
}
