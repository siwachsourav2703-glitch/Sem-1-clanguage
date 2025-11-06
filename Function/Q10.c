#include <stdio.h>
float areaOfCircle(float r) {
    return 3.14 * r * r; }
float areaOfRectangle(float length, float width) {
    return length * width; }
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height; }
int main() {
    float radius, length, width, base, height;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of Circle = %.2f\n\n", areaOfCircle(radius));

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of Rectangle = %.2f\n\n", areaOfRectangle(length, width));

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle = %.2f\n", areaOfTriangle(base, height));
    return 0;
}
