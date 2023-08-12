#include<stdio.h>
/*int main(){
    unsigned int i=1;
    while(i>=0)
    {
        printf("\n %d",i);
        i--;
    }
}*/

/*int main(){
    char j= 1;
    while (j<=255){
        printf("%d \n",j);
        j=j+1;
    }
}*/

/*int main(){
    int  j= 1;
    while (j<=255){
        printf("%d \n",++j);
    }
}*/


/*int main(){
int a;
for(a=1;a<32767;a++){
printf("%d \n",a);
}
}
*/


/*int main(){
    int i =1;
    for(i=1;i++<=5;printf("%d",i));
    }
*/ 

/*int main(){
int i=1,j=1;
for (;j;printf("%d%d \n ",i,j));
j=i++<=5;
}*/

/* Output is 21 31 41 51 61 70 */


/*nt main ()
{
    int i= 1;
    for(;i++;){
        printf("%d",i);
    }
}



int main(){
    int a =5;
    do{
        printf("%d")
    }
}*/


int main()
{ int x=3,z;
x= 3,2;
z= x++/x;
z= ++x/x;
z=x/x++;
z=x/++x;
printf("x=%d z=%d",x,z);
}


/*The first snippet is a commented-out loop that appears to be an infinite loop using while and i variables. It decrements i in each iteration. This loop would run indefinitely because i is of type unsigned int and will never become negative.

The second snippet is a commented-out loop using char data type and while loop. It prints values from 1 to 255. However, using char in this way is not portable since the char type may be either signed or unsigned depending on the platform.

The third snippet is a commented-out loop that attempts to print values from 2 to 256. However, it has a logical issue. The pre-increment operator should be used instead of post-increment in the loop's print statement.

The fourth snippet is a commented-out loop using int and for loop to print values from 1 to 32766.

The fifth snippet is a commented-out loop using for loop with a comma expression. It prints numbers 2 to 6 without newlines.

The sixth snippet is a commented-out loop that prints a series of numbers in the format 21 31 41 51 61 70.

The seventh snippet is a commented-out loop with a for loop that appears to be intended to run indefinitely. However, it lacks the body of the loop and the printf statement is incomplete.

The eighth snippet calculates and prints the value of x and z after a series of operations involving increment and division. The output will be: x=5 z=1.

*/