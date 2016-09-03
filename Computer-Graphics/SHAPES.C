#include<graphics.h>
#include<dos.h>
void main()
{
	int gd,gm,errorcode,ch,a,b,c,d,e,f;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to halt");
		getch();
		exit(1);
	}
	setbkcolor(15);
	setcolor(2);
	do
	{
		printf("Choose the option:\n1. Line\n2. Circle\n3. Ellipse\n4. Arc\n5. Sector\n6. Bar\n7.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the co-ordinates of first point.\n");
				scanf("%d %d",&a,&b);
				printf("\nEnter the co-ordinates of second point.\n");
				scanf("%d %d",&c,&d);
				line(a,b,c,d);
				break;

			case 2:
				printf("\nEnter the co-ordinates of center.\n");
				scanf("%d %d",&a,&b);
				printf("\nEnter the radius.\n");
				scanf("%d",&c);
				circle(a,b,c);
				break;

			case 3:
				printf("\nEnter the co-ordinates of center.\n");
				scanf("%d %d",&a,&b);
				printf("\nEnter the start angle and end angle.\n");
				scanf("%d %d",&c,&d);
				printf("\nEnter the x-radius and y-radius.\n");
				scanf("%d %d",&e,&f);
				ellipse(a,b,c,d,e,f);
				break;

			case 4:
				printf("\nEnter the co-ordinates of center.\n");
				scanf("%d %d",&a,&b);
				printf("\nEnter the start angle and end angle.\n");
				scanf("%d %d",&c,&d);
				printf("\nEnter the radius.\n");
				scanf("%d",&e);
				arc(a,b,c,d,e);
				break;

			case 5:
				printf("\nEnter the co-ordinates of center.\n");
				scanf("%d %d",&a,&b);
				printf("\nEnter the start angle and end angle.\n");
				scanf("%d %d",&c,&d);
				printf("\nEnter the x-radius and y-radius.\n");
				scanf("%d %d",&e,&f);
				sector(a,b,c,d,e,f);
				break;

			case 6:
				printf("\nEnter value of left and right.\n");
				scanf("%d %d",&a,&b);
				printf("\nEnter value of top and bottom.\n");
				scanf("%d %d",&c,&d);
				bar(a,c,b,d);
				break;
		}
	}while(ch<7);
	getch();
}