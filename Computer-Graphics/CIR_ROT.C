#include<graphics.h>
#include<math.h>

void main()
{
	int gd,gm,errorcode,x1,a=1;
	gd=DETECT;
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
	setcolor(5);
	x1=100;
	do{
	cleardevice();
	line(50,300,550,300);
	circle(x1,250,50);
	if(a%2==0)
		line(x1,200,x1,300);
	else
		line(x1-50,250,x1+50,250);
	delay(300);
	x1=x1+50;
	a++;
	}while(a<10);
	getch();
}