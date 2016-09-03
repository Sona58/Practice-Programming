import java.awt.*;
import java.applet.*;

/*<applet code="graphicsmethd.class" height=100 width=100></applet>*/
public class graphicsmethd extends Applet
{
	String s1=new String();
	String s2=new String();
	Font f1=new Font("Times New Roman",Font.BOLD,20);
	public void paint(Graphics g)
	{
		g.setFont(f1);
		g.setColor(Color.blue);
		g.drawString("Illustration of methods of Graphics Class",100,500);
		Font f2=g.getFont();
		g.setColor(Color.green);
		Color col=g.getColor();
		g.fillRect(100,15,70,90);
		g.drawRect(200,5,60,60);
		g.drawOval(10,120,105,105);
		g.setColor(Color.yellow);
		g.fillOval(500,140,50,150);
		g.setColor(Color.black);
		g.drawLine(380,100,200,180);
		g.drawArc(400,150,180,280,90,70);
		int x2[]={300,120,280,240};
		int z2=4,y2[]={260,370,380,170};
		g.setColor(Color.blue);
		g.fillPolygon(x2,y2,z2);
		g.setColor(Color.red);
		g.drawRect(15,15,30,50);
		FontMetrics f3=g.getFontMetrics();
		g.setColor(Color.magenta);
		g.fillRoundRect(310,350,90,80,20,20);
	}
};