#include <stdio.h>
int multiply3 (int number1,int number2,int number3)
{
int answer=number1*number2*number3 ;
return answer;
}
int main ()
{
    int response = multiply3(1,2,2)/2 ;
    printf("multiplication of %d,%d and %d is %d\n",1,2,2,response);
}