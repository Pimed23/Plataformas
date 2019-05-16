package Prueba;
import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/Demo")
public class Demo extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    public Demo() {
        super();
    }

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String name = request.getParameter("nombre");
		String apellido = request.getParameter("apellido");
		String email = request.getParameter("email");
		String sexo = request.getParameter("sexo");
		String departamento = request.getParameter("localidad");
		String comentarios = request.getParameter("comentarios");

		request.setAttribute("nombre", name);
		request.setAttribute("apellido", apellido);
		request.setAttribute("email", email);
		request.setAttribute("sexo", sexo);
		request.setAttribute("localidad", departamento);
		request.setAttribute("comentarios", comentarios);

		RequestDispatcher rd = request.getRequestDispatcher("/JSTL/test.jsp");
		rd.forward(request, response);
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
