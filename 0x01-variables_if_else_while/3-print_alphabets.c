#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

 int main(void){

	 int i;
	
	 char c = 'a';

	 for(i = 0; i < 52; i++){

		 if(i == 26)
		 {
			 c = 'A';
		 }
		
		 putchar(c);
		 
		 c++;

	 }
	
	 putchar('\n');
	 
	 return(0);
 }
