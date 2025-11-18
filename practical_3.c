 
    /* name : KRISHNA MAKWANA 
          roll no : 25CE056
          Aim : Write a C program to calculate Body Mass Index (BMI).
      */


#include <stdio.h>

int main() {
    float weight, height, bm;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bm = weight / (height * height);

    printf("Your BM is: %.2f\n", bm);

    return 0;
}