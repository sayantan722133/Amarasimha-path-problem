#include<stdio.h>
#include<conio.h>

int main()
{
    int x= 0, y= 0, i=1 , n;
    char c='f';
    printf("\nNo of turns :");
    scanf("%d",&n);
    while(i<=n)
    {
      if (c=='f')
      {
          x=x+(i*10);
          i++; 
          c='u';
      }
      else if(c=='u')
      {
          y=y+(i*10);
          i++;
          c='l';
      }
      else if(c=='l')
      {
          x=x-(i*10);
          i++;
          c='d';
      }
      else if(c=='d')
      {
          y=y-(i*10);
          i++;
          c='f';
      }
      
    }
    printf("\nThe final coordinate : %d %d",x,y);

    return (x,y);
}