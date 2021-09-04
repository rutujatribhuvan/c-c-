package webjava;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/WelcomeServlet")
public class WelcomeServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
 
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException	{
		response.setContentType("text/html");
    	PrintWriter out = response.getWriter();
		
    	String name = null;
    	String password = null; 
    	
    	name = request.getParameter("userName");
    	password = request.getParameter("userPassword");
		out.println("<h2> This is my welcome-servlet .</h2>"
				+ "<h2> User Name : " + name + 
				"<br><h2> User Password : " + password);
		
	}
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
