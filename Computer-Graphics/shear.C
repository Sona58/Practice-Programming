#include<graphics.h>

void main()
{
	int gd,gm,errorcode;
	int x1,y1,x2,y2,s,g,p,q,a;
	float x,y;
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
	printf("Enter the coordinates\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	line(x1,y1,x2,y1);
	line(x2,y2,x1,y2) ;
	line(x2,y1,x2,y2);
	line(x1,y2,x1,y1);
	printf("\nEnter the shearing factor along the x-axis\n");
	scanf("%f",&x);
	printf("\nEnter trhe scaling factor to the y-axis\n");
	scanf("%f",&y);
	a=((x*y1)+0.5);
	s=x1+a;
	a=((y*x1)+0.5);
	p=y1+a;
	a=((x*y2)+0.5);
	g=x2+a;
	a=((y*x2)+0.5);
	q=y2+a;
	setcolor(2);
	line(x1,y1,x2,p);
	line(g,q,s,y2) ;
	line(x2,p,g,q);
	line(s,y2,x1,y1);
	getch();
}