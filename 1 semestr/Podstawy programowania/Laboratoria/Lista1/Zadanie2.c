#include <stdio.h>
#include <math.h>

double a(double r){
    return (3.1415 + r * r);
}

double b(double r){
    return (4/3 * 3.1415 * r * r * r);
}

double c(double a, double b){
    return(sqrt(a*a + b*b));
}

double d(double a, double b, int d){
    double radians = d*2/360.0;
    printf("%f %f", radians, cos(radians));
    return(sqrt(a*a + b*b - 2*a*b*cos(radians)));
}

double e(double a, double p, double n){
    return(a * pow(1 + (p/100),n));
}

double f(double a, double b, double c){
    return((a*b / b+c) + (a*c / b+c));
}

int main(){
    printf("a) %f\n", a(3));
    printf("b) %f\n", b(3));
    printf("c) %f\n", c(3,4));
    printf("d) %f\n", d(2,3,360));
    printf("e) %f\n", e(1,10,2));
    printf("f) %f\n", f(2,3,4));
    printf("%f\n", cos(3.1415));
    return 0;
}
