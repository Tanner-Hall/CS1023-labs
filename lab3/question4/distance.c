#include<stdio.h>
#include<math.h>
double dist(double x1,double y1,double x2,double y2);

int main(void){
double w1 =0;
double h1 =0;
double w2 =0;
double h2 =0;
puts("enter the x position of the first point \n");
scanf("%lf", &w1);
puts("enter the y position of the first point \n");
scanf("%lf", &h1);
puts("enter the x position of the second point \n");
scanf("%lf", &w2);
puts("enter the y position of the second point \n");
scanf("%lf", &h2);
printf("the distance between the two points is %.2f\n", dist(w1,h1,w2,h2));

}
double dist(double x1,double y1,double x2,double y2){
    double d=0;
    d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    return d;
}
/*takes two x and y coordintes from the user.
calls upon the dist function to find the distance between the two 2-dimensional points.
Displays the distance*/