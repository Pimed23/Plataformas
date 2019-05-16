function revisarTexto( elemento ) {
    const maximo = 35;
    const pattern = new RegExp('^[A-Z]+$', 'i');
    if( elemento.value == "" ) {
        elemento.className="error";
    } else {
        if( elemento.value.length > maximo ) {
            elemento.className="error";
        } else {
            if( !pattern.test( elemento.value )) {
                elemento.className="error";
            }
            else {
                elemento.className="input";
            }
        }
    }
}

function revisarDescripcion( elemento ) {
    if( elemento.value == "" ) {
        elemento.className="error";
    } else {
        elemento.className="input";
    }
}

function revisarEmail( elemento ) {
    var data =elemento.value;
    var exp =/^[-\w.%+]{1,64}@(?:[A-Z0-9-]{1,63}\.){1,125}[A-Z]{2,63}$/i;
    if( exp.test(data)){
        elemento.className='input';
    } else {
        elemento.className='error';
    }
}

function validar() {
    var datosCorrectos=true;
    var error="";
    if(document.getElementById("nombre").value==""){
        datosCorrectos=false;
        error="\nEl campo de Nombre esta vacio";
    }
    if(document.getElementById("apellido").value==""){
        datosCorrectos=false;
        error="\nEl campo de Apellidos esta vacio";
    }
    if(document.getElementById("mail").value==""){
        datosCorrectos=false;
        error="\nEl campo de Email esta vacio";
    }
    if(document.getElementById("descripcion").value==""){
        datosCorrectos=false;
        error="\nEl campo de Descripcion esta vacio";
    }
    if(!document.querySelector('input[name="sexo"]:checked')) {
        datosCorrectos=false;
        error="\nFalta rellenar el campo sexo";
    }
    var selec=n_form.localidad.selectedIndex;
    if(n_form.localidad.options[selec].value=="0") {
        datosCorrectos=false;
        error="\nFalta indicar su departamento";
    }
    if(!document.querySelector('input[name="check1"]:checked')) {
        datosCorrectos=false;
        error="\nDebe aceptar las condiciones";
    }
    if(!document.querySelector('input[name="check2"]:checked')) {
        datosCorrectos=false;
        error="\nDebe aceptar las condiciones";
    }
    if(!datosCorrectos){
        alert("Hay errores en el formulario" + error );
    }
    return datosCorrectos;
}
