#include<graphics.h>

void main()
{
	int gd,gm,errorcode,a[8],i,x,y;

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
	printf("Enter coordinates for points of triangle.\n");
	for(i=0;i<6;i++)
	{
			scanf("%d",&a[i]);
			if(i==0)
				a[6]=a[0];
			else if(i==1)
				a[7]=a[1];
	}
	drawpoly(4,a);
	printf("\n Enter the translation factor for x and y.\n");
	scanf("%d %d",&x,&y);
	for(i=0;i<8;i++)
	{
		if(i%2==0)
			a[i]=a[i]+x;
		else
			a[i]=a[i]+y;
	}
	drawpoly(4,a);
	getch();
}