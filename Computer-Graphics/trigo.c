#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm,errorcode;
	int r,h,k;
	float xend,x,y,temp,tinc,t,tend,a;

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
	printf("Enter the center of circle\n");
	scanf("%d %d", &h,&k);
	printf("\nEnter the radius of the circle\n");
	scanf("%d",&r);
	temp=3.141/180;
	tinc=1.0/r;
	t=0;
	tend=45;
	while(t<=tend)
	{
		a=temp*t;
		x=r*cos(a);
		y=r*sin(a);
		putpixel(x+h,y+k,9);
		putpixel(y+h,x+k,9);
		putpixel(-y+h,x+k,9);
		putpixel(-x+h,y+k,9);
		putpixel(-x+h,-y+k,9);
		putpixel(-y+h,-x+k,9);
		putpixel(y+h,-x+k,9);
		putpixel(x+h,-y+k,9);
		t=t+tinc;
	}
	getch();
}