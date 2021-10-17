#include<stdio.h>
#include <stdlib.h>
main()
{
	int h,m,s;
	printf("\t\t\t programme : Horloge / le 31-07-2021 \n\n");
	printf("\t\t\t realiser par : ABDERRAHMANE ET-TOUNANI  \n\n\n\n");
	printf("\t\t\t entrer l'heure exacte : ");
	scanf("%d:%d:%d",&h,&m,&s);
	for(h;h<=24;h++)
	{
		if(h==24)
		{
			h=0;
		}	
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				for(int i=0;i<99999999;i++)
				{
					i++;
					i--;
				}
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t %2d:%2d:%2d \n",h,m,s);
			}s=0;
		}m=0;	
	}
}
