#include<graphics.h>

void main()
{
	int gd,gm,errorcode;
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
	rectangle(170,200,250,400);
	circle(210,240,25);
	circle(210,300,25);
	circle(210,360,25);
	outtextxy(200,450,"PRESS ANY KEY");
	getch();

	while (1)
	{
		cleardevice();
		rectangle(170,200,250,400);
		circle(210,240,25);
		circle(210,300,25);
		circle(210,360,25);
		setfillstyle(1,RED);
		floodfill(210,240,WHITE);
		outtextxy(200,240,"STOP");
		delay(2500);
		cleardevice();
		rectangle(170,200,250,400);
		circle(210,300,25);
		circle(210,240,25);
		circle(210,360,25);
		setfillstyle(1,YELLOW);
		floodfill(210,300,WHITE);
		setcolor(BLUE);
		outtextxy(190,300,"READY");
		setcolor(WHITE);
		delay(2500);
		cleardevice();
		rectangle(170,200,250,400);
		circle(210,360,25);
		circle(210,240,25);
		circle(210,300,25);
		setfillstyle(1,GREEN);
		floodfill(210,360,WHITE);
		outtextxy(200,360,"GO");
		delay(2500);
		if(kbhit())
			break;
	}

}










