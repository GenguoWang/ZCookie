#include<stdio.h>

int main()
{
    int n,i,j;
    char s1[30],s2[30];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s1);
        if((s1[0]=='h'||s1[0]=='H')&&(s1[1]=='t'||s1[1]=='T')&&(s1[2]=='t'||s1[2]=='T')&&(s1[3]=='p'||s1[3]=='P')&&s1[4]==':'&&s1[5]=='/'&&s1[6]=='/')
        {
            j=0;
        }
        else
        {
            s2[0]='h',s2[1]='t',s2[2]='t',s2[3]='p',s2[4]=':',s2[5]='/',s2[6]='/',j=7;
        }
        for(i=0;s1[i]!='\0';i++,j++)
        {
            if(s1[i]>='A'&&s1[i]<='Z')
            {
                s2[j]=s1[i]+32;
            }
            else
            {
                s2[j]=s1[i];
            }
        }
        s2[j]='\0';
        printf("%s\n",s2);
    }
    return 0;
}
