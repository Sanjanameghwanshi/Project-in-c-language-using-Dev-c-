#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>
int main()
{
	char a[60]="sanjana";
	char b[80];
	int x,t1,t2,d;
	printf("\t\t############### TYPEWRITER PROGRAM ###############\n\n");
	
	      t1=time(NULL);
	      printf("\n\n");
	      printf("Text: %s",a);
	      d:
	      printf("\nType the Following Sentence: ");
	      scanf("%s",&b);
	      if(strcmp(a,b)==0)
	      {
	      	printf("Above Sentece is Correct and Matched.\n\n");
	      	x=strlen(b);
	      	printf("Total Characters : %d\n",x);
		  
		  	t2=time(NULL);
		  	printf("Time Speed =(%d-%d) in Second",(t1-t2));
		  }
	      else
	      {
	      	printf("Above Sentece is not Correct and Matched");
	      	goto d;
		  }
		  
}
