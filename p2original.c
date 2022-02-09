#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the side\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{ int isscalene,notscalene;
  if(a=!b&&a=!c&&b=!c)
  {
    printf("The given triangle is scalene triangle");
  }
  else
  {
    printf("the given triangle is not a scalene triangle");
  }
  return 0;
}
void output(int a,int b,int c,int isscalene)
{
........................................................
}