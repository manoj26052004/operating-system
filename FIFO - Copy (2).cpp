#include<stdio.h>
int main()
{
	int incomingstream[] = {4,1,2,4,3,2,1,5};
	int pagefaults = 0;
	int frames = 3;
	int m,n,s,pages;
	pages = sizeof(incomingstream)/sizeof(incomingstream[0]);
	printf("Incoming\t Frame 1 \t Frame 2 \t Frame3");
	int temp[frames];
	for(m =0;m<frames;m++)
	{
		temp[m] = -1;
		
	}
	for(m=0;m<pages;m++)
	{
		s= 0;
		for(n=0;n<frames;n++)
		{
		if(incomingstream[m] == temp[n])
		{
			s++;
			pagefaults--;}}
			pagefaults++;
			if((pagefaults<= frames) && (s==0))
			{
				temp[m]=incomingstream[m];
			}
			else if(s==0)
{
	temp[(pagefaults -1)% frames] = incomingstream[m];
			}	printf("\n");	
			printf("%d\t\t",incomingstream[m]);
			for(n=0;n<frames;n++)
			{
				if (temp[n] != -1)
				printf("%d\t\t\t",temp[n]);
				else
				printf("-\t\t\t");
				}	}
				printf("\n total page faults: \t%d\n",pagefaults);	
		}
