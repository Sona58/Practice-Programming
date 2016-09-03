#include<graphics.h>

void main()
{
	int gd,gm,errorcode,x,y=50,r=50;
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
	setcolor(5);
	while(!kbhit())
	{
		if(kbhit())
			exit(0);
		else
			for(x=50;x<=600;x++)
			{
				circle(x,y,r);
				delay(5);
				cleardevice();
			}
		if(kbhit())
		{
			exit(0);
		}
		else
			for(y=50;y<=430;y++)
			{
				circle(x,y,r);
				x--;
				delay(5);
				cleardevice();
			}
		if(kbhit())
			exit(0);
		else
			for(y=430;x>=50;y=y-2)
			{
				circle(x,y,r);
				x--;
				delay(5);
				cleardevice();
			}
	}
	getch();
}