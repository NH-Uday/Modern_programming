#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number=100;
    int second_number=65;
    float first_number_float=10.50;
    float second_number_float=20.30;

/*
    float pi = 3.1415927;
    float radius = 1.25;
    float result_area = 2*pi*radius;

    printf("%f \n",result_area);
*/


    int result1 = first_number + second_number;
    int result2 = first_number - second_number;
    int result3 = first_number * second_number;
    int result4 = first_number / second_number;

    float result5 = first_number_float + second_number_float;
    float result6 = first_number_float - second_number_float;
    float result7 = first_number_float * second_number_float;
    float result8 = first_number_float / second_number_float;


    printf("%d \n",result1);
    printf("%d \n",result2);
    printf("%d \n",result3);
    printf("%d \n",result4);

    printf("%f \n",result5);
    printf("%f \n",result6);
    printf("%f \n",result7);
    printf("%f \n",result8);


    //printf("%d",first_number);

    return 0;
}
