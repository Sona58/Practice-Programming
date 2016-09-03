#include<graphics.h>

void main()
{
	int gd,gm,errorcode;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault");
		getch();
		exit(0);
	}
	setbkcolor(15);
	setcolor(1);
	setfillstyle(2,1);
	rectangle(100,400,200,200);
	rectangle(200,200,500,400);
	rectangle(300,250,400,300);//window
	rectangle(120,230,180,400);//door
	line(100,200,150,100);
	line(150,100,200,200);
	line(150,100,450,100);
	line(450,100,500,200);
	circle(150,160,20);
	floodfill(300,150,1);
	setfillstyle(8,1);
	floodfill(350,275,1);
	setfillstyle(3,1);
	floodfill(150,250,1);
	setfillstyle(9,1);
	floodfill(160,170,1);
	getch();
}