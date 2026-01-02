#include <stdio.h>
int printaddition(int number1,int number2) {
int answer = number1 + number2 ;
return answer;
}
int main (){
    int response = printaddition(2,2);
    printf("sum of %d and %d is %d\n",2,2,response);
}
