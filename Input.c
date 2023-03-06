#include <stdio.h>
#include <stdarg.h>


double tong(int sum, ...) {
    double flag = 0;
    va_list ptr;

    va_start(ptr,sum);

    for (int i = 0; i < sum; i++)
    {
        if (i % 2 == 0) {
            flag += va_arg(ptr, int);
        } else {
            flag += va_arg(ptr, double);
        }
    }
    va_end(ptr);

    return flag;
}

int main(){
    printf("Tong: %.2lf\n", tong(5,7,2.5,3,8.7,1));
    return 0;
}

