function verif(v) {
    if (isNaN(v)){
      throw new Error('Nombre non valide');
    }
}
let x; // le premier nombre de la multiplication
let y; // le deuxième nombre de la multiplication
let r; // proposition

// donne le rôle du bouton :
// si 'verifier' est 'true' alors le prochain clic sur le bouton
// est destiné à vérifier la réponse de l'utilisateur, sinon,
// le clic est destiné à proposer une nouvelle multiplication
let verifier = true; 


// génére une nouvelle multiplication, autrement dit :
// - génère deux entiers au hasard dans l'intervalle [1,9]
// - les affiche dans les bons éléments HTML
function nouvelle() {
    document.querySelector("#nombre1").innerHTML = (Math.random()*10).toFixed(2);
    document.querySelector("#nombre2").innerHTML = (Math.random()*10).toFixed(2);
    document.querySelector("#proposition").value = "";
    document.querySelector("#resultat").style.visibility = "hidden";
}

// cette fonction est appelée quand l'utilisateur clique
// sur le bouton. La fonction a deux rôles alternatifs :
// - vérifier que la proposition de l'utilisateur est correcte
// - générer une nouvelle multiplication
// Cette alternance est gérée à l'aide de la variable 'verifier'
function valider() {
    if(verifier == true){
        try {
            x= parseFloat(document.querySelector("#nombre1").innerHTML);
            y= parseFloat(document.querySelector("#nombre2").innerHTML);
            r= parseFloat(document.querySelector("#proposition").value);
            verif(r);
            document.querySelector("#resultat").style.visibility = "";
            console.log(r.toFixed(2));
            console.log((x*y).toFixed(2));
            // console.log((x*y).toFixed(2) == r.toFixed(2));
            if((x*y).toFixed(2) == r.toFixed(2)){
                document.querySelector("#resultat").innerHTML = "Resultat correct";
                verifier = false;
            }else{
                document.querySelector("#resultat").innerHTML = "Resultat incorrect";
            }
        } catch (err) {
            alert(err);
        }
    } else {
        nouvelle();
    }
}



