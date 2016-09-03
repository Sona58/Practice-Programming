#include<graphics.h>

void main()
{
	int gd,gm,errorcode,x1,x2,y1,y2,dx,dy,i;
	float a,b,x,y,s;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault.");
		getch();
		exit(0);
	}
	setbkcolor(15);
	printf("Enter the co-ordinates of first point.\n");
	scanf("%d %d",&x1,&y1);
	printf("\nEnter the co-ordinates of second point.\n");
	scanf("%d %d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(dx>=dy)
		s=dx;
	else
		s=dy;
	a=dx/s;
	b=dy/s;
	x=x1;
	y=y1;
	putpixel(x,y,5);
	for(i=0;i<=s;i++)
	{
		x=x+a;
		y=y+b;
		putpixel(x,y,5);
		delay(30);
	}
	getch();
}