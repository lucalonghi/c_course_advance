#include <stdio.h>
#include <stdarg.h>

int addingNumbersInt(int tot_num, ...);
double addingNumbersDouble(double v1, double v2, ...);

int main(){

    int result;
    double result_d;

    result = addingNumbersInt(2, 10 , 20);
    printf("result = %d\n", result);
    result = addingNumbersInt(3, 10 , 20, 30);
    printf("result = %d\n", result);
    result = addingNumbersInt(4, 10 , 20, 30, 40);
    printf("result = %d\n", result);

    result_d = addingNumbersDouble(10.0 , 20.0, 0.0);
    printf("result = %f\n", result_d);
    result_d = addingNumbersDouble(10.0 , 20.0, 30.0, 0.0);
    printf("result = %f\n", result_d);
    result_d = addingNumbersDouble(10.0 , 20.0, 30.0, 40.0, 0.0);
    printf("result = %f\n", result_d);

    return 0;
}

int addingNumbersInt(int tot_num, ...){
    int sum = 0;
    va_list parg;

    va_start(parg, tot_num);

    for(int i=0; i<tot_num; i++){
        sum += va_arg(parg, int);
    }

    va_end(parg);

    return sum;
}

double addingNumbersDouble(double v1, double v2, ...){
    double sum = 0;
    double val;
    va_list parg;

    va_start(parg, v2);

    sum = v1 + v2;

    do{
        val = va_arg(parg, double);
        sum += val;
    }while(val != 0.0);

    va_end(parg);

    return sum;
}
