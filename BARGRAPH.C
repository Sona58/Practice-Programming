#include<graphics.h>
#include<stdlib.h>

void main()
{
	int gd,gm,errorcode,a[5],i,d[5],u[5],y1,cnt=0;
	char b[5];
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
	setcolor(5);
	printf("Enter 5 marks:\n");
	for(i=0;i<5;i++)
	{   d[i]=1;
		printf("Marks %d:",(i+1));
		scanf("%d",&a[i]);
		u[i]=460-(a[i]*5);
	}
	y1=460;
	while(1)
	{
		if(d[0]){line(100,y1,150,y1);}
		if(d[1]){line(200,y1,250,y1);}
		if(d[2]){line(300,y1,350,y1);}
		if(d[3]){line(400,y1,450,y1);}
		if(d[4]){line(500,y1,550,y1);}
		delay(50);

		for(i=0;i<5;i++)
		{
			if(u[i]==y1)
			{
				outtextxy((100*(i+1)),(u[i]-15),itoa(a[i],b,10));
				d[i]=0;
				cnt++;
			}
		}
		y1--;
		if(cnt==5){break;}
	}
	getch();
}