// Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.
// Input
// The only input line contains an integer n.
// Output
// Print n integers: the results.
// Example
// Input:

// 8
// Output:

// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848

#include<stdio.h>
 
int main(){
    int n=1;
    if(scanf("%d", &n) != 1){
        return 0;
    }
    long long int result;
    long long int sq;
    long long int s=0;
    for(int a=1; a<=n; a++){
        s = 0; 
        sq = (a*a);
        s = ((sq-1)*(sq))/2;
        result = s - ((4*sq)-(12*a)+8);
        printf("%lld \n", result);
    }
    
}

