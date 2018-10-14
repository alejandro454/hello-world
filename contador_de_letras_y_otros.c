#include<stdio.h>
main()
{
  int c;
  int cletras, cotros;
  
  cletras = 0;
  cotros = 0;
  
  while((c = getchar()) != EOF){
    if(c == '\n' || c == '\t' || c == ' ' )
        ++cotros;
    else
        ++cletras;
  }
  printf("\n %d letras %d otros ", cletras, cotros); 
}
