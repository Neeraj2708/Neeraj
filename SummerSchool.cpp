/* */
#include <iostream>
using namespace std;

struct Rational
{
    int num;
    int deno;
};

int main(){
    typedef struct Rational r1,r2,r3;
    r1.num=3;
    r1.deno=5;
    r2.num=2;
    r2.deno=5;
    r3.num=(r1.num*r2.deno+r2.num*r1.deno);
    r3.deno=r1.deno*r2.deno;
    printf("%d",r1.num)
    printf("%d",r1.deno)

}




/*
CODE 2
INPUT = 10 TRIANGLES
OUTPUT = Ascending order of the area 
*/

struct triangle 
{
    int a; 
    int b;
    int c;
    int area;

};
int main(){
    typedef struct triangle t[10];
}




/*CODE 3*/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int findVariable(int arr[], int n, int key);
int deleteVariable(int arr[], int n, int key)
{
    int pos=findVariable(arr, n, key);
    
    if(pos == -1)
    {
        cout<<"variable not found";
        return n;
    }
    
    int i;
    for(i=pos; i<n-1; i++)
    arr[i]=arr[i+1];
    
    return n-1;
}

int findVariable(int arr[], int n, int key)
{
    int i;
    for(i=0; i<n; i++)
      if(arr[i]== key)
        return i;
    return -1;
}

int main()
{
    int i;
    int arr[]={10, 50, 30, 40, 20};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int key =30;
    
    cout<<"array before deletion \n";
    for(i=0; i<n; i++)
    cout<< arr[i]<<" ";
    
    n=deleteVariable(arr, n, key);
    cout<<"\n \n array after deletion \n";
    
    for(i=0; i<n; i++)
    cout<< arr[i]<<" ";
    
    return 0;
}


/*   CODE 4   */

#include<stdio.h>
#include<conio.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   clrscr();
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(int value){
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion success!!!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}



/* CODE 5 */
#include <iostream>
using namespace std;

int main()
{
    int value,key;
    cout<<"Enter the number: ";
    cin>>value>>key;
    value =value|key;
    cout<<"value after setting bit: "<<value;
    return 0;
}



/*CODE  5*/

/*Toggle*/
#include<iostream>
using namespace std;

int main()
{
    int num,bit,temp;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"enter the bit number to be set: ";
    cin >>bit;
    temp=1<<(bit-1);
    num = num ^ temp;
    cout<<"value after setting bit: ";
    cout<<bit<<"\n"<<num;
    return 0;
}

/* CODE  6 */
#include <iostream>
using namespace std;

int main()
{
    int num,bit,temp;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"enter the bit number to be set: ";
    cin >>bit;
    temp=1<<(bit-1);
    num = num |temp;
    cout<<"value after setting bit: ";
    cout<<bit<<"\n"<<num;
    return 0;
}



/*CODE 7 */
#include <stdbool.h>
#include <iostream>
using namespace std;

bool oppsign(int int1,int int2){
    return((int1^int2)<0);
}

int main(){
    int int1=100, int2=-100;
    if(oppsign(int1,int2)==true){cout<<"Opposite sign is Present"<<endl;}
    else{cout<<"Opposite sign is not present"<<endl;}
}


/*CODE 8 */
#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    void printarray(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        cout<<arr[i]<<"";
    }
}

int main()
{
    arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);
    reversearray(arr,0,n-1);
}





/*CODE 9 FIND PEAK */
#include <bits/stdc++.h>
using namespace std;
int findpeak(int arr[],int n)
{
    if(n==1)
    return 0;

    if(arr[0]>=arr[1])
    return 0;

    if(arr[n-1]>=arr[n-2])
    return n-1;

    for(int i=1; i<n-1;i++)
    {
        if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        return i;
    }
}
int main()
{
    int arr[]={1,9,8,12,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Index of peak Element :"<<findpeak(arr,n);
    return 0;
}


/*CODE 10 */
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int count(vector<int>z& nums,int& mid)
{
    int cnt=0;

    for(int i=0;i<nums.size(),i++)
    if(nums[i]<=mid)
    cnt++;

    return cnt;
}


int kthsmallest(vector <int> nums,int& k)
{
    int low =INT_MAX;
    int high = INT_MIN;

    for(int i<0;i<nums.size();i++)
    {
        low=min(low,nums[i]);
        high=max(high,nums[i]);
    }

    while(low>high)
    {
        int mid =low+(high-low)/2;

        if(count(nums,mid)<k)
        low=mid+1;
        
        else
        high=mid;
    }
return low;

}
int main()
{
    vector<int>nums{1,4,5,3,19,3};
    int k=3;

    cout<<"kth element"<<kthsmallest(nums,k);
    return 0;
}




/*CODE 11*/
/*recursive approach abt bs*/
#include <iostream>
using namespace std;


int bs (int arr[],int l,r,x)
{
    if(r>=1){

    int mid =l+(r-1)/2;

    if (arr[mid]==x)
    return mid;

    if(arr[mid]>x)
    return bs(arr,l,mid-1,x);

    return bs(arr,mid+1,r,x);
    }
    return -1;
}

/*CODE 12 */
#include <bits/stdc++.h>

using namespace std;

int kthsmallest(int arr[],int N,int K)
{
    sort(arr,arr+N);
    return (arr[K-1]);
}

int main()
{
    int arr[]={10,3,5,7,19};
    int N= sizeof(arr)/sizeof(arr[0]);
    int K=3;
    cout<<"Kth smallest:"<<kthsmallest(arr,N,K);

    return 0;
}

/*several code snippets that cover various topics and concepts. I'll briefly describe each code snippet:

Rational Structure:
This snippet defines a struct Rational representing rational numbers with a numerator and denominator. It then initializes three instances of this struct, performs calculations on them, and prints some values. There are a few issues in this code snippet: missing semicolons after printf statements, missing return 0; at the end of main, and undeclared types r1, r2, and r3.

Sorting Triangles by Area:
This code defines a struct triangle representing triangles with sides and area. It doesn't implement the sorting of triangles by area, which seems to be the intended purpose.

Deletion in an Array:
This snippet demonstrates the deletion of an element from an array. It defines functions to find and delete an element from an array, then demonstrates the usage in main.

Stack Implementation:
This code provides a basic implementation of a stack using an array. It allows pushing, popping, and displaying elements in a stack.

Bit Manipulation - Setting a Bit:
This code takes a number and a bit position, then sets the bit at the specified position and prints the result.

Bit Manipulation - Toggling a Bit:
This code takes a number and a bit position, then toggles (flips) the bit at the specified position and prints the result.

Detect Opposite Signs:
This snippet defines a function oppsign that checks if two integers have opposite signs and demonstrates its usage.

Array Reversal:
This code defines functions to reverse an array and print an array. However, the printarray function is inside the reversearray function, which is not syntactically correct. It also has a typo in the main function where arr[] should be defined.

Finding a Peak Element:
This snippet defines a function to find a peak element in an array and demonstrates its usage.

Kth Smallest Element - Binary Search Approach:
This code defines a function to find the kth smallest element in an array using a binary search approach and demonstrates its usage.

Binary Search Recursive Approach:
This code defines a binary search function implemented recursively.

Kth Smallest Element - Sorting Approach:
This code finds the kth smallest element in an array using sorting and prints the result.

Please note that some of these code snippets have minor issues or might not work correctly as they are. If you have specific questions about any of these snippets or if you need help fixing issues, feel free to ask.





*/