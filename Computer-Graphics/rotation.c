#include<graphics.h>
#include<math.h>

void main()
{
	int gd=DETECT,gm,errorcode;
	int x1,x2,x3,y1,y2,y3,tx,ty,ch;
	float a;

	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault");
		getch();
		exit(1);
	}
	setbkcolor(15);
	setcolor(6);
	printf("Enter coordinates of the triangle\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	printf("\nEnter the angle of rotation\n");
	scanf("%f",&a);
	a=(a*3.14)/180;
	x1=x1*cos(a)-y1*sin(a);
	y1=x1*sin(a)+y1*cos(a);
	x2=x2*cos(a)-y2*sin(a);
	y2=x2*sin(a)+y2*cos(a);
	x3=x3*cos(a)-y3*sin(a);
	y3=x3*sin(a)+y3*cos(a);
	setcolor(3);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();
	closegraph();
}