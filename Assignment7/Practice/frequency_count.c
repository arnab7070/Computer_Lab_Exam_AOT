//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include<stdio.h>
#include<string.h> 
int main()
{
    char s[100];  
    int  i,j,k,count=0,n;
    printf("Enter  the string : ");
    gets(s); 
    for(j=0;s[j];j++);
	   n=j; 
	printf("Frequencies are:\n");
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
 		  for(j=i+1;j<n;j++)  
	      {   
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);
       }
 	}  
    return 0;
}
