#include<graphics.h>
#include<math.h>

void main()
{

	int gd=DETECT,gm,errorcode;
	int r,h,k;
	float xend,x=0,y=0,x1,y1,z;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault");
		getch();
		exit(0);
	}
	setbkcolor(15);
	printf("Enter the center of circle\n");
	scanf("%d %d", &h,&k);
	printf("\nEnter the radius of the circle\n");
	scanf("%d",&r);
	xend=r/1.414;
	while(x<=xend)
	{
		x++;
		z=((r*r)-(x*x));
		y=sqrt(z);
		putpixel(x+h,y+k,4);
		putpixel(y+h,x+k,4);
		putpixel(-y+h,x+k,4);
		putpixel(-x+h,y+k,4);
		putpixel(-x+h,-y+k,4);
		putpixel(-y+h,-x+k,4);
		putpixel(y+h,-x+k,4);
		putpixel(x+h,-y+k,4);
	}
	getch();
}