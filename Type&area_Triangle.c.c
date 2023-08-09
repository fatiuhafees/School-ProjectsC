#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, area, s;
  printf(" Enter sides a, b, c: ");
  scanf ("%f,%f,%f",&a ,&b ,&c);

  //semi-perimeter
  s = (a+b+c)/2;
  //area
  area = sqrt(s*(s-a)*(s-b)*(s-c));

  //type of triagnle 
  if(a == b && b == c){
    printf(" Triangle is a Equilateral. "); //all sides are the same
  }
  else if(a == b|| b == c|| c == a){
    printf(" Triangle is a Isosceles. "); //only two sides are the same  
  }
  else if(a != b|| b != c|| c != a){
    printf(" Triangle is a Scalene. "); //all sides are different
  } 
  //using rightangle triangle equation :)
  else if( sqrt((a*a)+(b*b)) == c ||
           sqrt((c*c)+(b*b)) == a ||
           sqrt((a*a)+(c*c)) == b   ){
    printf(" Triangle is a Rightangle. ");
  }  
  else{
    printf("Got no clue...");
  }

  printf("\nArea: %f\n ",area);//general print

  return 0;
}