#include<stdio.h>
#include<math.h>
void solverp(float , float ,float ,float* ,float* );
int main()
{
    float x,y,z,ans1,ans2;
    float *root1=&ans1;
    float *root2=&ans2;
    printf("enter the inputs:\n");
    scanf("%f%f%f",&x,&y,&z);
    if (x==0 && y==0)
    {
        printf("ERROR!");
        return 0;
    }
    solverp(x,y,z,root1,root2);
}
void solverp(float a,float b,float c,float *root1,float *root2)
{
    float delta;
    delta=(b*b)-(4*a*c);
    if (delta>0)
    {
        *root1=((-b)+sqrt(delta))/(2*a);
        *root2=((-b)-sqrt(delta))/(2*a);
        printf("has got two roots\n");
    }
    else if (delta==0)
    {
        *root1=*root2;
        *root2=(-b)/(2*a);
        printf("has got only one root\n");
    }
    else 
      printf("this equation has got no roots\n");
}