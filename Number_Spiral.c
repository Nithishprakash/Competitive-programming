// A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

// 01 02 09 10 25
// 04 03 08 11 24
// 05 06 07 12 23
// 16 15 14 13 22
// 17 18 19 20 21

// Your task is to find out the number in row y and column x.
// Input
// The first input line contains an integer t: the number of tests.
// After this, there are t lines, each containing integers y and x.
// Output
// For each test, print the number in row y and column x.

#include<stdio.h>
 
void search(long long x, long long y);
 
int dummy;
long long num,p,freq,size=0;
int main(){
    long long int counts=0;
    if (scanf("%lld", &freq) != 1) {
        return 1; // or handle the error appropriately
    }
    size = freq*2;
    long long pairs[size];
    for(long long i=0; i<freq;i++){
        // printf("Enter (row)x and (column)y (separated by space)\n");
        if (scanf("%lld %lld", &pairs[counts], &pairs[counts+1]) != 2) {
            return 1;
        }
 
        counts=counts+2;
    }
    counts=0;
    for(long long i=0; i<freq;i++){
        search(pairs[counts], pairs[counts+1]);
        counts=counts+2;
    }
}
 
void search(long long x, long long y){
    if(x==y){
        num = (x*x)-(x)+1;
        printf("%lld\n",num);
    }
    else if(x<y){
        p=y-x;
        if(y%2==0){
            num = (y*y)-(y)+1-p;
        }
        else{
            num = (y*y)-(y)+1+p;
        }
        printf("%lld\n",num);
    }
        else if(x>y){
        p=x-y;
        if(x%2==0){
            num = (x*x)-(x)+1+p;
        }
        else{
            num = (x*x)-(x)+1-p;
        }
        printf("%lld\n",num);
    }
}
