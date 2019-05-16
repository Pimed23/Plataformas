<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	Bienvenido
	<c:out value="${nombre}"></c:out> 
	<c:out value="${apellido}"></c:out>
	<br>
	Sexo:
	<c:out value="${sexo}"></c:out><br>
	Email:
	<c:out value="${email}"></c:out><br>
	Departamento:
	<c:out value="${localidad}"></c:out><br>
	Descripcion:
	<c:out value="${descripcion}"></c:out><br>
	Acepto recibir informacion = 
	<c:out value="${check1}"></c:out><br>
	Acepto terminos y condiciones = 
	<c:out value="${check2}"></c:out><br>
	
	
	
	
	
</body>
</html>