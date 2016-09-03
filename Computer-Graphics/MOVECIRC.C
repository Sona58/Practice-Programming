#include<graphics.h>

void main()
{
	int gd,gm,errorcode,x,y,r=10;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();

	if (errorcode != grOk)
	{
		printf("Graphics error: %s\n", grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1);
	}
	x=getmaxx()/2;
	y=getmaxy()/2;

	while(kbhit()==0)
	{
		circle(x,y,r);
		r=r+5;
		delay(300);
	}
}