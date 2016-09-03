import java.io.*;
import java.util.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class q29 extends HttpServlet{
	
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException,IOException{
		
		HttpSession session=request.getSession();
		response.setContentType("text/html");
		PrintWriter out=response.getWriter();
		Date d1=(Date)session.getAttribute("date1");
		if(d1!=null)
			out.println("Last Access: "+d1+"<br>");
		d1=new Date();
		out.println("Current Date: "+d1);
		session.setAttribute("date1",d1);
	}
}