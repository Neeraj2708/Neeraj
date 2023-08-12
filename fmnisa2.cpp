// Question :The program calculates and returns the missing number based on this assumption.


#include<bits/stdc++.h>
using namespace std;
int missingno(int a[],int n){
    int i,total =1;

    for (int i=2 ;i<(n+1);i++){
    total +=i;
    total -=a[i-2];
    }
    return total;
    
}

int main()
{
    int arr[]={1,2,3,5};
    int N = sizeof(arr)/sizeof(arr[0]);

    int miss =missingno(arr,N);
    cout<<miss;
    return 0;

}


/*This C++ program calculates the missing number in an array of consecutive integers. Here's a breakdown of how it works:

The missingno function takes an array a and an integer n as parameters.
Inside the function, a variable total is initialized with the value 1. This variable will be used to keep track of the sum of consecutive integers from 1 to n+1.
A for loop iterates from i = 2 to i = n (inclusive).
In each iteration, the value of total is increased by i, and then decreased by a[i-2]. This effectively accumulates the sum of the expected sequence of consecutive integers and subtracts the values present in the array a.
After the loop, the total variable holds the sum of the expected sequence of consecutive integers minus the sum of the values in the array a. This difference represents the missing number.
The missingno function returns the calculated missing number.
In the main function:

An array arr is defined with elements {1, 2, 3, 5}.
The variable N is assigned the size of the array divided by the size of its first element, giving the number of elements in the array.
The missingno function is called with the array arr and its size N, and the result is stored in the variable miss.
Finally, the missing number is printed using cout.
*/
