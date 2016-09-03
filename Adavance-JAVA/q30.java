import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class q30 extends HttpServlet{

	public void doPost(HttpServletRequest request,HttpServletResponse response) throws ServletException,IOException{
		response.setContentType("text/html");
		PrintWriter out=response.getWriter();
		String name=request.getParameter("name");
		String count=request.getParameter("count");
		int c1=Integer.parseInt(count);
		out.println("<html><body><center><table border=0><form method='post' action='q30'><tr><td align='center'>");
		if(c1==1){
			out.println("Hello "+name+". How are you? ");
		}
		else if(c1==2){
			out.println("OK! What is your favourite color?");
		}
		else{
			out.println("Nice! ;)");
		}
		c1=c1+1;
		out.println("</td></tr><tr><td><input type='text' name='name'/><input type='hidden' name='count' value='"+c1+"'/></td></tr><tr><td align='center'><input type='submit' value='Submit'/></td></tr></form></table></center></body></html>");
		
	}
}