import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code="mhandle.class" width=300 height=100></applet>*/

public class mhandle extends Applet implements MouseListener, MouseMotionListener
{
	String msg="";
	int mouseX=0,mouseY=0;
	public void init()
	{
		addMouseListener(this);
		addMouseMotionListener(this);
	}
	public void mouseClicked(MouseEvent me)
	{
		mouseX=0;
		mouseY=10;
		msg="Mouse Clicked.";
		repaint();
	}
	public void mouseEntered(MouseEvent me)
	{
		mouseX=0;
		mouseY=10;
		msg="Mouse Entered.";
		repaint();
	}
	public void mouseExited(MouseEvent me)
	{
		mouseX=0;
		mouseY=10;
		msg="Mouse Exited.";
		repaint();
	}
	public void mousePressed(MouseEvent me)
	{
		mouseX=me.getX();
		mouseY=me.getY();
		msg="Mouse Down.";
		repaint();
	}
	public void mouseReleased(MouseEvent me)
	{
		mouseX=me.getX();
		mouseY=me.getY();
		msg="Mouse Up.";
		repaint();
	}
	public void mouseDragged(MouseEvent me)
	{
		mouseX=me.getX();
		mouseY=me.getY();
		msg="*";
		showStatus("Dragging mouse at "+mouseX+", "+mouseY);
		repaint();
	}
	public void mouseMoved(MouseEvent me)
	{
		showStatus("Moving mouse at "+me.getX()+", "+me.getY());
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,mouseX,mouseY);
	}
};