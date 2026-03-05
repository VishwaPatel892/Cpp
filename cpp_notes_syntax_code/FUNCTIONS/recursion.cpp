// Recursion
// When a function calls itself, it is called recursion and the function which is calling itself is called a recursive function. The recursive function consists of a base condition and a recursive condition. 
// Recursive functions must be designed with a base case to make sure the recursion stops, otherwise, they are bound to execute forever and that's not what you want. The case in which the function doesn’t recur is called the base case. For example, when we try to find the factorial of a number using recursion, the case when our number becomes smaller than 1 is the base case.


int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}