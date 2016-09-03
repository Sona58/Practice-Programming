#include<graphics.h>

void main()
{
	int gd,gm,errorcode,x=250,y=250,s=0,e=360,a=25,b=40;
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
	setcolor(1);
	while(!kbhit())
	{
		rectangle(100,290,400,310);
		rectangle(100,310,120,400);
		rectangle(380,310,400,400);
		circle(x,y,40);
		delay(200);
		cleardevice();
		rectangle(100,290,400,310);
		rectangle(100,310,120,400);
		rectangle(380,310,400,400);
		ellipse(x,y,s,e,a,b);
		delay(200);
		cleardevice();
		rectangle(100,290,400,310);
		rectangle(100,310,120,400);
		rectangle(380,310,400,400);
		ellipse(x,y,s,e,a-10,b);
		delay(200);
		cleardevice();
		rectangle(100,290,400,310);
		rectangle(100,310,120,400);
		rectangle(380,310,400,400);
		line(250,290,250,210);
		delay(200);
		cleardevice();
		rectangle(100,290,400,310);
		rectangle(100,310,120,400);
		rectangle(380,310,400,400);
		ellipse(x,y,s,e,a-10,b);
		delay(200);
		cleardevice();
		rectangle(100,290,400,310);
		rectangle(100,310,120,400);
		rectangle(380,310,400,400);
		ellipse(x,y,s,e,a,b);
		delay(200);
		cleardevice();
		rectangle(100,290,400,310);
		rectangle(100,310,120,400);
		rectangle(380,310,400,400);
	}
	getch();
}