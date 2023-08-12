//Question : It calculates and prints the maximum profit that can be achieved
// by selecting items fractionally in the given knapsack.
#include <bits/stdc++.h>
using namespace std;
struct Objects
{
    int value, weight;
    
    Objects(int value, int weight): value(value), weight(weight)
    {
        
    }
};

 

bool cmp(struct Objects a, struct Objects b)
{
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    return r1>r2;
}
double fract_knap(struct Objects arr[], int N, int size)
{
    sort(arr, arr + size, cmp);
    
    int curweight =0;
    
    double finalvalue=0.0;
    
    for(int i=0; i<size; i++)
    {
        if(curweight + arr[i].weight<=N)
        {
            curweight +=arr[i].weight;
            finalvalue +=arr[i].value;
        }
        else
        {
            int remain= N - curweight;
            finalvalue +=arr[i].value * ((double)remain/arr[i].weight);
            
            break;
        }
    }
    
    return finalvalue;
}

 


int main()
{
    int N=60;
    
    Objects arr[]={ {100, 10}, {280, 40}, {120, 20}, {120,24} };
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"max proft is "<< fract_knap(arr, N, size);
    
    return 0;
}

/*This C++ program demonstrates the Fractional Knapsack problem, which is a classic optimization problem in computer science and algorithms. The goal of the Fractional Knapsack problem is to determine the maximum total value of items that can be selected to fit into a knapsack of a given capacity, allowing fractions of items to be included.

Here's a breakdown of how the program works:

The program defines a struct named Objects that represents items with a value (benefit) and a weight. The constructor of this struct initializes the values of value and weight.

The cmp function is a comparison function used for sorting the items in descending order of their value-to-weight ratios. This comparison is essential for the greedy approach used in the Fractional Knapsack algorithm.

The fract_knap function implements the Fractional Knapsack algorithm. It takes an array of Objects, the capacity of the knapsack N, and the number of items size as parameters.

Inside the fract_knap function:

The array of objects is sorted based on the value-to-weight ratio using the cmp function.
The function initializes variables curweight to keep track of the current weight in the knapsack and finalvalue to keep track of the total value obtained.
A loop iterates through the sorted array of objects. If the current item's weight can be accommodated in the knapsack without exceeding the capacity, the item's weight is added to curweight, and its value is added to finalvalue.
If adding the current item would exceed the capacity, a fraction of the item is added to the knapsack to fill the remaining space. The fraction is calculated based on the remaining space and the item's weight-to-value ratio.
In the main function:

An array of objects arr is defined with their values and weights.
The knapsack capacity N is set to 60.
The fract_knap function is called with the array of objects, knapsack capacity, and size of the array.
The maximum profit that can be obtained is printed.
*/