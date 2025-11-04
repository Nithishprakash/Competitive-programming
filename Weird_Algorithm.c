// Consider an algorithm that takes as input a positive integer n.
// If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. 
// The algorithm repeats this until n is one. For example, the sequence for n=3 is as follows:
// 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

// Your task is to simulate the execution of the algorithm for a given value of n.
// Input
// The only input line contains an integer n.
// Output
// Print a line that contains all values of n during the algorithm.

#include<stdio.h>
int compute(unsigned long long int n);
 
int main(){
    long long int n = 1;
    if(scanf("%llu", &n) != 1){
        fprintf(stderr, "Invalid input\n");
        return 1;
    };
    printf("%llu ",n);
    compute(n);
    
}
 
int compute(unsigned long long int n){
    if(n == 1){
        return 0;
    }
    if(n%2 == 0){
        n = n/2;
        printf("%llu ",n);
        compute(n);
    }
    else{
        n = 3*n + 1;
        printf("%llu ", n);
        compute(n);
    }
 
}
