# include <stdio.h>
# include <stdbool.h>
                                            
int nextprime(int);
 
int main()
{
       int m=1;
             char input;
    
            do
            {
        
                 m=nextprime(m);
                     printf("%d\t",m);
         
                 printf(" Print Next Prime number? Y or N ");
                  scanf(" %c",&input);
         
                 } 
                    while(input != 'N' && input != 'n');
                 return 0;
}


  int nextprime(int m)
{
           m++;
    
    int i=2;
     while(i<m)
    {
        if(m%i==0)
        {
           m++;
           i=2;
           continue;
        }
        else
        {
        i++;
        }
    }
    
    return m;
} 
