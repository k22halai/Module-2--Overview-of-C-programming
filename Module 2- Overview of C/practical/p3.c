#include<stdio.h>
void main(){
    
    int a,b,c;      // variable declaration
    printf("Enter A value : ");  // prompt user for input
    scanf("%d",&a);   // read integer input for a
    printf("Enter B value :");  // prompt user for input
    scanf("%d",&b);   // read integer input for b

    c=a+b;           // addition operation
    printf("%d  +  %d  =  %d",a,b,c);

    c=a-b;  // subtraction operation
    printf("\n%d  -  %d  =  %d",a,b,c);

    c=a*b;  // multiplication operation  
    printf("\n%d  *  %d  =  %d",a,b,c);

    c=a/b;  // division operation
    printf("\n%d  /  %d  =  %d",a,b,c);

    c=a%b; // modulus operation
    printf("\n%d  %%  %d  =  %d",a,b,c);

    c= a==b; // equality operation
    printf("\n%d  ==  %d  =  %d",a,b,c); // check if a is equal to b

    c= a<b; // less than operation
    printf("\n%d  <  %d  =  %d",a,b,c);

    c= a>b; // greater than operation   
    printf("\n%d  >  %d  =  %d",a,b,c);

    c= a>=b; // greater than or equal to operation   
    printf("\n%d  >=  %d  =  %d",a,b,c);

    c= a<=b; // less than or equal to operation   
    printf("\n%d  <=  %d  =  %d",a,b,c);

    c= a!=b; // not equal to operation
    printf("\n%d  !=  %d  =  %d",a,b,c);

    c=a++; // increment operation
    printf("\nIncrement A value : %d",a);
    
    c=b--; // decrement operation
    printf("\nDecrement B value : %d",b);
    
    c= a&&b; // logical AND operation
    printf("\n%d  &&  %d  =  %d",a,b,c);

    c= a||b; // logical OR operation
    printf("\n%d  ||  %d  =  %d",a,b,c);

    c= !a; // logical NOT operation
    printf("\n!%d  =  %d",a,c);
}