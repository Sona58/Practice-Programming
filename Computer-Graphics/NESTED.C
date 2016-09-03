#include<graphics.h>

void main()
{
	int gd,gm,errorcode,a,b,c,d,e,ch;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics Error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to hault.");
		getch();
		exit(0);
	}
	setbkcolor(15);
	setcolor(4);
	do{
		printf("Choose Option:\n1. Nested Rectangle\n2. Nested Arc\n3. Nested Circle\n4. Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value of left, top, right, bottom.\n");
				scanf("%d %d %d %d",&a,&b,&c,&d);
				rectangle(a,b,c,d);
				rectangle(a+5,b+5,c-5,d-5);
				break;

			case 2:
				printf("Enter the co-ordinates of center.\n");
				scanf("%d %d",&a,&b);
				printf("Enter start angle and end angle.\n");
				scanf("%d %d",&c,&d);
				printf("Enter the radius.\n");
				scanf("%d",&e);
				arc(a,b,c,d,e);
				arc(a,b,c,d,e-5);
				break;

			case 3:
				printf("Enter the co-ordinates of center.\n");
				scanf("%d %d",&a,&b);
				printf("Enter the radius.\n");
				scanf("%d",&c);
				circle(a,b,c);
				circle(a,b,c-5);
				break;
		}
	}while(ch<4);
	getch();
}