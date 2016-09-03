#include<graphics.h>

void main()
{
	int gd=DETECT,gm,errorcode;
	int x1,x2,x3,y1,y2,y3,xn1,xn2,xn3,yn1,yn2,yn3,c;
	float a;
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
	setcolor(10);
	printf("Enter the coordinates of triangle\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	printf("Enter the axis of reflection\n");
	printf("\n1.about x axis");
	printf("\n2.about y axis\n");
	scanf("%d",&c);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	if(c==1)
	{
		xn1=x1;
		yn1=180-y1;
		xn2=x2;
		yn2=180-y2;
		xn3=x3;
		yn3=180-y3;
	}
	if(c==2)
	{
		xn1=180-x1;
		yn1=y1;
		xn2=180-x2;
		yn2=y2;
		xn3=180-x3;
		yn3=y3;
	}
	line(xn1,yn1,xn2,yn2);
	line(xn2,yn2,xn3,yn3);
	line(xn3,yn3,xn1,yn1);
	getch();
	closegraph();
}