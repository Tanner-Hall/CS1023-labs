#include <stdio.h>

int toQualityPoints(int average);
int main(void){
    int avg=0;
    puts("enter your average");
    scanf("%d", &avg);
    printf("the expected quality points for this average is %d\n", toQualityPoints(avg));

}
int toQualityPoints(int average)
{
  if (100 >= average && average >= 90){
    return 4;
  }
  if (89 >= average && average >= 80){
    return 3;
  }
  if (79 >= average && average >= 70){
    return 2;
  }
  if (69 >= average && average >= 60){
    return 1;
  }
  if (60 > average){
    return 0;
  }
}