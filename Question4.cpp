/* WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/

#include<stdio.h>
int main(){
    int r;
    printf("Plase enter the radius: ");
    scanf("%d",&r);
    float a =r*r*3.14;
    printf("Area of circle is %d having the redius %d",a,r);
    return 0;
}
