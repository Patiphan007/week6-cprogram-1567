#include <stdio.h>
void main()
{
    int choice;
    float radius, circum, area;
    printf("1.Circumference of the circle\n");
    printf("2.Circumference of the circle\n");
    printf("Enter your choic 1 or 2 :");
    scanf("%d", &choice);
    printf("Enter radius of the circle");
    scanf("%f", &radius);
    if (choice == 1){
        circum = 2 * 3.14 * radius;
        printf("Circumference of the circle = %.2f\n", circum);
    }
else{
    area = 3.14 * radius * radius;
    printf("Area of the circle = %.2f\n", area);
    }
}

