//https://www.interviewbit.com/problems/number-of-1-bits/

//Iterative Solution
int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=0;
    while(A){
        count+=(A%2);
        A=A/2;
    }
    return count;
}
