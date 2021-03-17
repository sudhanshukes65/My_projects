#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],arrvowels[1000];  
    int i,vowels=0,conso=0,x=0;
 
    printf("Input string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
            {
		      vowels++;
              arrvowels[x]=s[i];
              arrvowels[x+1]=' ';
              x+=2;
            }
            else
             conso++;
        }
 
 	}
 	
    printf("OUTPUT \n");
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",conso);
    printf("vowels are : %s\n",arrvowels);
    
    return 0;
}
