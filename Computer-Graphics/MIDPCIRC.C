#include<graphics.h>

void plotpoint(int xc,int yc,int x,int y)
 {
	  putpixel(xc+x,yc+y,1);
	  putpixel(xc+y,yc+x,1);
	  putpixel(xc-y,yc+x,1);
	  putpixel(xc-x,yc+y,1);
	  putpixel(xc-x,yc-y,1);
	  putpixel(xc-y,yc-x,1);
	  putpixel(xc+y,yc-x,1);
	  putpixel(xc+x,yc-y,1);
	  delay(20);
 }

 void main()
 {
	  int gd=DETECT,gm,xc=300,errorcode,yc=250,r,x,y,Pk;
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
	  printf("Enter the Radius\n");
	  scanf("%d",&r);
	  x=0;
	  y=r;
	  Pk=1-r;
	  plotpoint(xc,yc,x,y);
	  while(x<y)
	  {
	      if(Pk<0)
	      {
		   x=x+1;
		   Pk=Pk+(2*x)+1;
	      }
	      else
	       {
		   x=x+1;
		   y=y-1;
		   Pk=Pk+(2*x)-(2*y)+1;
	      }
	      plotpoint(xc,yc,x,y);
	  }
	  getch();
 }