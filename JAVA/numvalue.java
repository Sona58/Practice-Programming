import java.awt.*;
import java.applet.*;
/*<applet code="numvalue.class" width=300 height=300></applet>*/
public class numvalue extends Applet
{
	public void paint(Graphics g)
	{
		int value1=40;
		int value2=60;
		int sum=value1+value2;
		String str="Sum: "+String.valueOf(sum);
		g.drawString(str,100,100);
	}
};