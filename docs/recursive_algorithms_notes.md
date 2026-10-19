# Recursive Algorithms Laboratory Notes

Students should implement each required function recursively, without using loops in the recursive versions.

## Required Algorithms

1. `factorial(n)`
2. `fibonacci(n)`
3. `binarySearch(array, target)`
4. `arraySum(array)`
5. `reverseArray(array)`

## Expected Design

- Identify and comment on the base case for each implementation.
- Identify and comment on the recursive case for each implementation.
- Use clear parameter names and return values.
- Include validation for invalid or unsupported inputs.
- For comparison, also implement iterative versions.

## Comparison Requirement

For each algorithm where an iterative solution is reasonable, provide a written comparison covering:

- time complexity;
- space complexity;
- number and depth of recursive calls;
- readability and maintainability;
- advantages and disadvantages of recursion;
- stack overflow risk;
- Big-Oh analysis for both recursive and iterative forms.
Factorial: The time complexity of both iterative and recursive version is O(n). The space complexity of recursion method is O(n), but for the iterative method is O(1). The resursive version makes about n calls, and the depth with O(n). The recursive method is calling itself until the base case it reacher which uses a lot of memory, but the iterative approach is memory-effecient. Recursive method is easy to understand, but it uses a lot of memory. The recursive method can cause stack overflow, but iteration method does not have this risk. For recursive method, the time complexity is O(n) and space complexity is O(n), for the iterative approach, the time complexity is O(n), and the space complexity is O(1).

Fibonacci: The time complexity of recursive method is O(2^n) and for iterative method, the time complexity is O(n). The space complexity of recursive method is O(n) and for iteration method, it is O(1). The recursive approach makes an exponential number of calls, and had a call depth of O(n). Recursion method is based on the math formula for fibonacci, but the iteration method is more efficient. Although recursion is straight forward but repeats calculations, iteration avoids that and uses less memory. The recursion method can cause stack overflow, but the iteration method avoids this risk. For recursive approach, the time complexity if O(2^n), and space complexity is O(n), and for the iterative approach, the time complexity is O(n) and space complexity is O(1).

Binary search: The recursive method has a time complexity of O(n), and iterative method has time complexity of O(log n). The recursive method has space complexity of O(n), and iteration method has the space complexity of O(1). Recursion method calls iteself until the base case is reached. In this function, recursion is method is easy to follow, but iteration method is memory efficient. The recursion method can cause stack overflow, and iterative method avoids it. 

Array Sum: Time complexity of recursion is O(n^2), and the iteration method has O(n). The space complexity of recursion method is O(n^2), and the iteration method has O(1). 
The recursive approach makes n+1 calls for an arrray of n length, and its call depth is O(n). Recuriosn adds the first element plus the the rest of the array. Iteration is simpler and more efficient, it uses while loop to go through the array and add all the numbers together. Recursion shows the recursive method and adds time and memory for each recursive call, but iteration is simpler and avoids them. The recursive call can cause a stack overflow, the iteration does not have that risk. Recurive approach has time complexity of O(n^2), and space complexity of O(n^2) for worst case scenario, and iterative method has time complexity of O(n) and space complexity of O(1). 

Reverse Array: The recursion method has time complexity of O(n^2) and iterative method has O(n). The space complexity of recurion method is O(n), and the iterative appraoch has O(1). The recursion method uses swap function to do an in-place reverse and then calls the function itself for the remaining middle elements. Iteration is simpler, faster, and uses less memory. The recursive method can cause stack overflow, but the iteration method avoids that. The recursive method has time complexity of O(n^2) and space complexity of O(n). The iteration method has time complexity of O(n) and space complexity of O(1).