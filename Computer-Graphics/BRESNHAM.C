#include<graphics.h>

void main()
{
	int gd,gm,errorcode,x,y,x1,y1,x2,y2,dx,dy,p,i;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault.");
		getch();
		exit(1);
	}
	setbkcolor(15);
	printf("Enter the start coordinates.\n");
	scanf("%d %d",&x1,&y1);
	printf("\nEnter the end coordinates.\n");
	scanf("%d %d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	p=2*dy-dx;
	i=2*dy;
	x=x1;
	y=y1;

	do{

	putpixel(x,y,3);
	delay(30);
	x=x+1;

	if(p<0)
		p=p+i;
	else
	{
		p=p+i-(2*dx);
		y=y+1;
	}

	}while(x<x2);
	getch();
}