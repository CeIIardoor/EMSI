
// teste si les champs du formulaire sont corrects et :
// - si ils le sont, retourne 'true'
// - sinon, affiche le message d'erreur adéquat dans
//   l'emplacement prévu à cet effet, et retourne 'false'
function checkform() {

    let login = document.querySelector("#log").value;
    let pass = document.querySelector("#pass1").value;
    let confpass = document.querySelector("#pass2").value;
    
    validator = (login.length > 2 && /^[a-zA-Z()]+$/.test(login) && pass.length > 3 && pass == confpass)
    if(validator == false){
        msg = "<ul>";
        if (login.length < 3) msg += "<li>Le login est trop court</li>";
        if (!/^[a-zA-Z()]+$/.test(login)) msg +=  "<li>Le login est numérique</li>";
        if (pass.length < 4) msg += "<li>Le mdp est trop court</li>";
        if (pass != confpass) msg += "<li>Le mdp ne correspond pas</li>";
        msg += "</ul>";
        errormsg(msg);
    }
}

// efface le contenu de l'élément où on affiche
// les messages d'erreur et cache cet élément
function resetform() {

}

// écrit 'msg' dans l'élément où on affiche
// les messages d'erreur et montre cet élément
function errormsg(msg) {
    document.querySelector("#erreur").style.visibility = "";
    document.querySelector("#erreur").innerHTML = msg;
}