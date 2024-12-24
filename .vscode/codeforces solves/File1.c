#include<stdio.h>
int main()
{
    FILE *fr=fopen("data.txt","r");
    int i,x,y;
    for(i=0;i<3;i++)
    {
    fscanf(fr,"%d %d",&x,&y);
    printf("%d %d\n",x,y);
}
fclose(fr);
return 0;
}
