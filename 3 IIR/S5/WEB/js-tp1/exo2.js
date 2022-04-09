
// étant donnée la moyenne 'm'
// retourne l'appréciation correspondante
// (une chaîne de caractères)


// calcule la moyenne à partir des trois notes
// et affiche la mmoyenne et l'appréciation correspondante
function verif(v) {
    if (isNaN(v) || v < 0 || v > 20){
      throw new Error('Note non valide!');
    }
}
function appreciation(m) {
    if (m>=10) {
        if (m<12) return "Passable";
        else if (m>=12 && m<14) return "Assez Bien";
        else if (m>=14 && m<16) return "Bien";
        else if (m>=16 && m<18) return "Très Bien";
    } else {
        return "Redoublant";
    }     
};
function calculer() {
    try {
        var d1= parseFloat(document.querySelector("#note1").value);
        verif(d1);
        var d2= parseFloat(document.querySelector("#note2").value);
        verif(d2);
        var d3= parseFloat(document.querySelector("#note3").value);
        verif(d3);
        m =(d1 + d2 +d3)/3;
        document.querySelector("#resultat").style.visibility = "";
        document.querySelector("#moyenne").innerHTML = m;
        document.querySelector("#appreciation").innerHTML = appreciation(m);
    } catch (err) {
        alert(err);
    }
};
