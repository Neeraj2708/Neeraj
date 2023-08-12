// c program for implementation of Lexical Analyser
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main(){
    int i, ic=0, m, cc=0,oc=0,j;
    char b[30], operators[30], identifiers[30], constants[30];
    printf("enter the string: ");
    scanf("%[^\n]s", &b);
    for(i=0; i<strlen(b);i++){
        if(isspace(b[i])){
            continue;
        }
        else if(isalpha(b[i])){
            identifiers[ic]=b[i];
            ic++;
        }
        else if(isdigit(b[i])){
            m=(b[i]-'0');
            i=i+1;
            while(isdigit(b[i])){
                m=m*10+(b[i]-'0');
                i++;
            }
            i=i-1;
            constants[cc]=m;
            cc++;
        }
        else{
            if(b[i]=='*'){
                operators[oc]='*';
                oc++;
            }
            else if (b[i] == '+')
            {
                operators[oc] = '+';
                oc++;
            }
            else if(b[i]=='-')
            {
                operators[oc]='-';
                oc++;

            }
            else if (b[i] == '=')
            {
                operators[oc] = '=';
                oc++;
            }

        }
    }
        printf(" \n identifiers: ");
        for(j=0;j<ic;j++){
            printf("%c " ,identifiers[j]);
        }
        printf("\n operators: ");
        for (j = 0; j < oc; j++)
        {
            printf("%c ", operators[j]);
        }
        printf("\n constants :");
        for (j = 0; j < cc; j++)
        {
            printf("%d ", constants[j]);
        }
    
}

/*This C program is an implementation of a basic Lexical Analyzer. A Lexical Analyzer is a component of a compiler that reads the source code and divides it into meaningful tokens for further processing. The program tokenizes an input string into identifiers, operators, and constants.

Here's how the program works:

It starts by defining arrays to store identifiers, operators, and constants, along with variables to keep track of the count of identifiers (ic), constants (cc), and operators (oc).

The user is prompted to enter an input string using scanf. The string is then processed character by character.

The loop iterates through each character in the input string.

If the character is a space, it is ignored using isspace.
If the character is a letter (alphabetical), it is considered part of an identifier and added to the identifiers array.
If the character is a digit, the program reads the entire number until a non-digit character is encountered, constructs the integer constant, and adds it to the constants array.
If the character is an operator (*, +, -, =), it is added to the operators array.
After processing the input string, the program prints out the identified identifiers, operators, and constants.

The program ends with the closing brace of the main function.

It's important to note that this program has some limitations and potential issues:

It assumes that identifiers consist of alphabetic characters only (no digits or other symbols).
It assumes that constants are integer literals.
It only recognizes a limited set of operators (*, +, -, =).
The program may not handle complex expressions, special characters, or more advanced language constructs.
There are potential buffer overflow issues if the input string and arrays exceed their defined sizes.
While this program provides a basic demonstration of a lexical analyzer, real-world implementations are much more complex and handle a wider range of language features and constructs.




*/