#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int integer_number;
    long long_number;
    char char_variable;
    float float_number;
    double double_number;

    scanf("%d %ld %c %f %lf", &integer_number, &long_number, &char_variable, &float_number, &double_number);
    printf("%d\n%ld\n%c\n%.3f\n%.3lf", integer_number, long_number, char_variable, float_number, double_number);

    return 0;
}