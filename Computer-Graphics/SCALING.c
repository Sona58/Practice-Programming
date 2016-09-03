#include<graphics.h>

void main()
{
	int gd,gm,errorcode,i,x0,y0;
	double x,y,a[4];
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
	setcolor(1);
	printf("Enter the coordinates of rectangle.\n");
	for(i=0;i<4;i++)
	{
		scanf("%lf",&a[i]);
	}
	rectangle(a[0],a[1],a[2],a[3]);
	x0=(a[0]+a[2])/2;
	y0=(a[1]+a[3])/2;
	printf("\nEnter scaling factor for x and y.\n");
	scanf("%lf %lf",&x,&y);
	a[0]=x0-(x*(x0-a[0]));
	a[1]=y0-(y*(y0-a[1]));
	a[2]=x0+(x*(a[2]-x0));
	a[3]=y0+(y*(a[3]-y0));
	setcolor(3);
	rectangle(a[0],a[3],a[2],a[1]);
	getch();
}