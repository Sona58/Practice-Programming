#include<graphics.h>
#include<stdlib.h>

void main()
{
	int gd,gm,errorcode,i,a[5],u[5],s=0,c=0,y=220;
	char d[10];
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode = graphresult();

	if (errorcode != grOk)
	{
		 printf("Graphics error: %s\n", grapherrormsg(errorcode));
		 printf("Press any key to halt:");
		 getch();
		 exit(1);
	}
	setbkcolor(15);
	setcolor(5);
	printf("Enter 5 marks of student.\n");

	for(i=0;i<5;i++)
	{
		printf("\nMarks %d: ",(i+1));
		scanf("%d",&a[i]);
		s=s+a[i];
	}

	for(i=0;i<5;i++)
	{
		u[i]=(a[i]*360)/s;
		setfillstyle((i+1),(i+1));
		pieslice(250,250,c,(u[i]+c),100);
		fillellipse(500,y,10,10);
		outtextxy(515,y,itoa(a[i],d,10));
		y=y+50;
		c=c+u[i];
	}
	getch();
}