#include "project/recursive_algorithms.h"

#include <stdexcept>
#include <utility>
#include <vector>

// TODO: Implement factorial recursively.
// Base case: n == 0 or n == 1.
// Recursive case: n * factorial(n - 1).
int factorial(int n) {
    if (n < 0) {    //check if input is negative    
        throw std::invalid_argument("Negative input not allowed");
    }
    if (n == 0) {           //base case: factorial of 0 is 1
        return 1;
    }
    else if (n == 1) {      //base case: factorial of 1 is 1
        return 1;
    }
    else {
        return n * factorial(n-1);      //recursive case: multiply n by factorial of (n-1)
    }
}


// TODO: Implement an iterative factorial comparison.
int factorialIterative(int n) {
    if (n < 0) {    //check if input is negative
        throw std::invalid_argument("Negative input not allowed");
    }
    int result = 1;
    while (n > 1) {
        result *= n;        //multiply result by n in each iteration
        n--;                //decrement n in each iteration
    }
    return result;
}

// TODO: Implement fibonacci recursively.
// Base case: fib(0) = 0, fib(1) = 1.
// Recursive case: fib(n) = fib(n - 1) + fib(n - 2).
int fibonacci(int n) {
    if (n < 0) {        //check if input is negative
        throw std::invalid_argument("Negative input not allowed");
    }
    if (n == 0) {        //base case: fib(0) = 0
        return 0;
    }
    else if (n == 1) {   //base case: fib(1) = 1
        return 1;
    }
    else {               //recursive case: fib(n) = fib(n - 1) + fib(n - 2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// TODO: Implement iterative fibonacci comparison.
int fibonacciIterative(int n) {
    if (n < 0) {        //check if input is negative
        throw std::invalid_argument("Negative input not allowed");
    }
    if (n == 0) {        //base case: fib(0) = 0
        return 0;
    }
    int a = 0;            //initialize first fibonacci number
    int b = 1;            //initialize second fibonacci number
    for (int i = 2; i <= n; ++i) {   //iterate from 2 to n
        int temp = a + b;            //calculate next fibonacci number
        a = b;                       //update a to previous b
        b = temp;                    //update b to new fibonacci number
    }
    return b;                        //return nth fibonacci number
}

// TODO: Implement recursive binary search on a sorted array.
// Base case: target not found or left > right.
// Recursive case: compare middle element and recurse on the appropriate half.
int binarySearch(const std::vector<int>& array, int target) {
    if (array.empty()) {            //check if array is empty
        return -1;
    }

    int middle = array.size() / 2;    //calculate middle index
    if (array[middle] == target) {    //check if middle element is the target
        return middle;
    }
    else if (array[middle] < target) {   //if middle element is less than target
        int result = binarySearch(std::vector<int>(array.begin() + middle + 1, array.end()), target);
        return result == -1 ? -1 : result + middle + 1;   //adjust index if found in the right half
    }
    else {   //if middle element is greater than target
        return binarySearch(std::vector<int>(array.begin(), array.begin() + middle), target);   //recurse on the left half
    }
}

// TODO: Implement iterative binary search comparison.
int binarySearchIterative(const std::vector<int>& array, int target) {
    if (array.empty()) {
        return -1;
    }
    int left = 0;
    int right = array.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

// TODO: Implement recursive array sum.
// Base case: empty array.
// Recursive case: first element + arraySum(rest-of-array).
int arraySum(const std::vector<int>& array) {
    if (array.empty()) {
        return 0;
    }
    else {
        return array[0] + arraySum(std::vector<int>(array.begin() + 1, array.end()));
    }
}

// TODO: Implement iterative array sum comparison.
int arraySumIterative(const std::vector<int>& array) {
    if (array.empty()) {
        return 0;
    }
    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    return sum;
}

// TODO: Implement recursive in-place reversal.
// Base case: size <= 1.
// Recursive case: swap first and last elements, then recurse on the remaining middle.
void reverseArray(std::vector<int>& array) {
    if (array.size() <= 1) {        //base case: array of size 0 or 1
        return;
    } 

    int first = array.front();       //store first element
    int last = array.back();         //store last element
    std::swap(array.front(), array.back());   //swap first and last elements
    array.erase(array.begin());      //remove first element
    array.pop_back();                //remove last element

    reverseArray(array);             //recurse on the remaining middle
    array.insert(array.begin(), last);   //insert original last element at the beginning
    array.push_back(first);              //append original first element at the end

    return;                           //return after reversal
}

// TODO: Implement iterative reverse comparison.
void reverseArrayIterative(std::vector<int>& array) {
    if (array.empty()) {            //check if array is empty
        return;
    }
    int left = 0;                   //initialize left pointer
    int right = array.size() - 1;   //initialize right pointer
    while (left < right) {           //loop until pointers meet
        std::swap(array[left], array[right]);   //swap elements at left and right pointers
        left++;                      //move left pointer right
        right--;                     //move right pointer left
    }
}
