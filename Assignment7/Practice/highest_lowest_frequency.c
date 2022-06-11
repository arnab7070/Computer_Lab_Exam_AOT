//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>  
#include <string.h>    
int main()  
{  
    char str[100];
    printf("Enter any string: ");
    gets(str);
    int i, j, min, max;
    int len = strlen(str);  
    char minChar = str[0], maxChar = str[0];  
    int freq[100];        
    //Count each word in given string and store in array freq  
    for(i = 0; i < len; i++) {  
        freq[i] = 1;  
        for(j = i+1; j < len; j++) {  
            if(str[i] == str[j] && str[i] != ' ' && str[i] != '0') {  
                freq[i]++;                    
                //Set string[j] to 0 to avoid printing visited character  
                str[j] = '0';  
            }  
        }  
    }        
    //Determine minimum and maximum occurring characters  
    min = max = freq[0];  
    for(i = 1; i < len; i++) {            
        //finding minimum in an array 
        if(min > freq[i] && freq[i] != '0') {  
            min = freq[i];  
            minChar = str[i];  
        }  
        //finding maximum in an array  
        if(max < freq[i]) {  
            max = freq[i];  
            maxChar = str[i];  
        }  
    }     
    printf("Minimum occurring character is %c.\n", minChar);  
    printf("Maximum occurring character is %c.\n", maxChar);            
    return 0;  
}  
