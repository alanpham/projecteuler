//
//  main.cpp
//  EvenFibonacci
//
//  Created by Alan Pham on 10/23/15.
//  Copyright © 2015 Alan Pham. All rights reserved.
//

#include <iostream>
using namespace std;
//condition ? result_if_true : result_if_false
bool isEven(int num){
    return (num % 2 == 0 ? true : false);
}

int findNextFibonacci(int a, int b){
    return a+b;
}



int main(int argc, const char * argv[]) {
    int64_t sum = 2;
    int first = 1, second = 2;
    int fibonacci_num = findNextFibonacci(first, second);
    clock_t begin = clock();
    while (fibonacci_num < 4000000){
        if (isEven(fibonacci_num)){
            sum += fibonacci_num;
            first = second;
            second = fibonacci_num;
            fibonacci_num = findNextFibonacci(first, second);
        }
        else {
            first = second;
            second = fibonacci_num;
            fibonacci_num = findNextFibonacci(first, second);
        }
    }
    clock_t end = clock();
    
    cout << sum << endl;
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    cout << elapsed_secs << endl;
    return 0;
}
