#include<graphics.h>

void main()
{
	int gd,gm,errorcode,s=0,e=45,c,r=50,x=200,y=300,sp,d=1000;
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	errorcode = graphresult();

	if (errorcode != grOk)
	{
		printf("Graphics error: %s\n", grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1);
	}
	setbkcolor(15);
	setcolor(4);
	pieslice(x,y,s,e,r);
	pieslice(x,y,s+135,e+135,r);
	pieslice(x,y,s+245,e+255,r);
	printf("Press down arrow key to switch off the fan");
	printf("\nPress space bar to increase speed of the fan");
	delay(1000);
	while(!kbhit())
	{
		s=0;
		e=45;
		for(c=0;c<20;c++)
		{
			pieslice(x,y,s,e,r);
			pieslice(x,y,s+135,e+135,r);
			pieslice(x,y,s+245,e+255,r);
			s=s+2;
			e=e+2;
			delay(d);
			if((s>=360)||(e>=360))
				break;
			if(kbhit())
			{
				sp=getch();
				if(sp==32)
				{
					d=500;
				}
				if(sp==80)
				{
					outtextxy(170,400,"fan stopped");
					pieslice(x,y,s,e,r);
					pieslice(x,y,s+135,e+135,r);
					pieslice(x,y,s+245,e+255,r);
					break;
				}
			}
			cleardevice();
		}
		break;
	}
	getch();
}