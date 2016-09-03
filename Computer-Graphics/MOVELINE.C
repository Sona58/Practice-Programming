#include<graphics.h>

void main()
{
	int gd,gm,errorcode,x1=100,x2=200,y=100,a,b=-1;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");

	errorcode=graphresult();

	if(errorcode!=grOk)
	{
		printf("Graphics error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault:");
		getch();
		exit(1);
	}

	line(x1,y,x2,y);
	while(b==-1)
	{

		a=getch();
		printf("%d %d",a,b);
		if(a==72)
		{	y=y-5;}
		else if(a==80)
		{	y=y+5;}
		else if(a==77)
		{	x1=x1+5;x2=x2+5; }
		else if(a==75)
		{	x1=x1-5;x2=x2-5;}
		else if(a==27)
		{	exit(1);}
		cleardevice();
		line(x1,y,x2,y);
	}
}