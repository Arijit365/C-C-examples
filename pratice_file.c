# include<stdio.h>
# include<string.h>
# include<Stdlib.h>

char **allocator(int);

int main()
{    char *temp ;
     temp=malloc(sizeof(char)*101);
    char **list;
    int i,j;
    int test ,money, N ;
    int t=1;
    scanf("%d",&test);
    
    for(i=0;i<test;i++)
    {   
       money=0 ;
        scanf("%d",&N);
       
        list=allocator(N);
        for(j=0;j<N;j++)
        {
          fflush(stdin);
          scanf("%[^\n]%c",(list+j));
        }
          temp=*(list+i);
       for(j=0;j<(N-1);j++)
       {
           if(strcmp(temp,list[j+1])>0)
           money++;
           else
           temp=list[j+1];
       }

      printf("Case #%d: %d\n",i+1,money);

      for(j=0;j<N;j++)
       free(*(list+j));
       free(list);
    }
     return 0 ;
}

 char **allocator(int N)
{
  int i;
  char *list = (char *)malloc(sizeof(char *)*N);
   for(i=0;i<N;i++)
   {
    *(list+i) = (*char);malloc(sizeof(char)*100);
   }
   return list ;
}