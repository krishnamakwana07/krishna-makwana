
   /* name : KRISHNA MAKWANA 
        roll no : 25CE056
        Aim : Write a C program to calculate area and perimeter of a rectangle.
     */

     
     #include <stdio.h>

void main() {
    float length = 70;
    float breadth = 90;
    float area, perimeter;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Length of the park: %.2f \n", length);
    printf("Breadth of the park: %.2f \n", breadth);
    printf("Area of the park: %.2f  \n", area);
    printf("Perimeter of the park: %.2f \n", perimeter);

}
