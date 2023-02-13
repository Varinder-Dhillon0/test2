#include<stdio.h>
int main(){
    const double PI = 3.14159;
    double radius;
    double circumfrence;
    double area;

    printf("Enter the radius ofthe circle : ");
    scanf("%lf", &radius);

    circumfrence = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumfrence of the circle is : %lf", circumfrence); 
    printf("\nArea of the circle is : %lf", area);

    return 0; 
}