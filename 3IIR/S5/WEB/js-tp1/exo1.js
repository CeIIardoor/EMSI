
// calcule le prix TTC à partir du prix hors-taxe
// et de la TVA
// affiche une alerte avec un message d'erreur si les
// valeurs fournies ne sont pas des nombres

function verif(v) {
    if (isNaN(v)){
      throw new Error('Parameter is not a number!');
    }
}
function prixTTC(r) {
    if(r){
        document.querySelector("#pht").value = "";
        document.querySelector("#tva").value = "";
        // document.querySelector("#pttc").innerHTML = "0";
        document.querySelector("#resultat").style.visibility = "hidden";
        return;
    }
    try {
        var pht = parseFloat(document.querySelector("#pht").value);
        verif(pht);
        var tva = parseFloat(document.querySelector("#tva").value);
        verif(tva);
        var pttc = parseFloat(document.querySelector("#pttc").value);
        verif(tva);
        pttc = pht + pht*tva/100;
        document.querySelector("#resultat").style.visibility = "";
        document.querySelector("#pttc").innerHTML = pttc;
    }
        catch(err) {
        alert(err);
    }
    
    
    
}
