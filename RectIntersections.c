#include<stdio.h>
#include<stdbool.h>

bool hitRect(float,float,float,float,float,float,float,float,float,float,float,float);
bool LineRect(float,float,float,float,float,float,float,float);

int main(){


float rx1=200,ry1=100,rx2=200,ry2=300,rx3=400,ry3=100,rx4=400,ry4=300;

float x1=300,y1=200,x2=350,y2=350;

bool hit= hitRect(x1,y1,x2,y2,rx1,ry1,rx2,ry2,rx3,ry3,rx4,ry4);

if(hit){
    printf("this line is getting inetrsected");
}
else{
     printf("this line is not getting inetrsected");
}


return 0;
  
}

bool hitRect(float x1,float y1,float x2,float y2,float rx1,float ry1,float rx2,float ry2,float rx3,float ry3,float rx4,float ry4){
    
  bool left = LineRect(x1,y1,x2,y2,rx1,ry1,rx2,ry2);
  bool right = LineRect(x1,y1,x2,y2,rx3,ry3,rx4,ry4);
  bool top = LineRect(x1,y1,x2,y2,rx1,ry1,rx3,ry3);
  bool bottom = LineRect(x1,y1,x2,y2,rx2,ry2,rx4,ry4);

  // if ANY of the above are true, the line
  // has hit the rectangle
  if (left || right || top || bottom) {
    return true;
  }
  return false;


}

bool LineRect(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4) {

  // calculate the direction of the lines
  float A = ((x4-x3)*(y1-y3) - (y4-y3)*(x1-x3)) / ((y4-y3)*(x2-x1) - (x4-x3)*(y2-y1));
  float B = ((x2-x1)*(y1-y3) - (y2-y1)*(x1-x3)) / ((y4-y3)*(x2-x1) - (x4-x3)*(y2-y1));

  // if A and B are between 0-1, lines are colliding
  if (A >= 0 && A <= 1 && B >= 0 && B <= 1) {

    return true;
  }

    return false;
}