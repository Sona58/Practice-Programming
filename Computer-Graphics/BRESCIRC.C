# include<graphics.h>

void main()
{
	int gd,gm,errorcode,r,x,y,p,xc=320,yc=240;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault.");
		getch();
		exit(1);
	}
	setbkcolor(15);
	printf("Enter the radius\n");
	scanf("%d",&r);

	x=0;
	y=r;
	putpixel(xc+x,yc-y,6);
	delay(20);
	p=3-(2*r);
	for(x=0;x<=y;x++)
	{
		if(p<0)
			p=(p+(4*x)+6);
		else
		{
			y=y-1;
			p=p+((4*(x-y)+10));
		}
		putpixel(xc+x,yc-y,6);
		putpixel(xc-x,yc-y,6);
		putpixel(xc+x,yc+y,6);
		putpixel(xc-x,yc+y,6);
		putpixel(xc+y,yc-x,6);
		putpixel(xc-y,yc-x,6);
		putpixel(xc+y,yc+x,6);
		putpixel(xc-y,yc+x,6);
		delay(20);
	}
	getch();
}