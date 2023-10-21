#include<stdio.h>

int main()
{
char a[20];
scanf("%s" , &a);

void rev (char *p )
{
	int l = 0;
  while(*p != '\0')
  {  
  	p++;
  	  

  	l++;
  	  		
  
  }
  p--;
  
  
  while(l>=0)
  {
  	l--;
  	printf("%c",*p);
  	p--;
  	
  }
  
}


rev(a);
}
