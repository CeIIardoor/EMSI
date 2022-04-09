
// le nombre d'essais dans la partie courante
let  essais = 0;
// le nombre total d'essais de toutes les parties
let  nbEssais = 0;
// le nombre de paties jouées et terminées
let  nbParties = 1;
// indique si on est en train de jouer une partie
let  partieEnCours = true;
// le nombre à deviner
let  secret = generer();
// le nombre d'essais du meilleur jeu
// Number.MAX_SAFE_INTEGER est la plus grande valeur
// entière possible
let  meilleurJeu = Number.MAX_SAFE_INTEGER;

// vérifie la proposition de l'utilisateur et :
// - si la proposition est incorrecte, affiche la bonne
//   indication (trop petit ou trop grand)
// - sinon affiche le nombre d'essais qui ont été nécessaires
//   et mets à jour les statistiques
function verifier() {
    if(partieEnCours == true){
        proposition = document.querySelector("#proposition").value;
        essais++;
        if(proposition > secret) return afficher("Trop grand", "red");
        if(proposition < secret) return afficher("Trop petit", "red");
        if(proposition == secret){
            partieEnCours = false;
            proposition = document.querySelector("#proposition").value = "";
            document.querySelector("#question").style.visibility = "visible";
            meilleurJeu = (essais < meilleurJeu) ? essais : meilleurJeu;
            nbEssais += essais;
            essais = 0;
            return afficher("Félicitations", "green");
        } 
    }
}

// si 'encore' est vrai, démarre une nouvelle partie
// sinon termine le jeu en affichant le message adéquat
function jouerEncore(encore) {
	if(encore == true){
        document.querySelector("#question").style.visibility = "hidden";
        afficher('','');
        secret = generer();
        nbParties++;
        partieEnCours = true;
    }else{
        if (partieEnCours == false) {
            afficherStat();
        }
    }
}

// affiche un message dans une couleur donnée
// dans l'élément prévu à cet effet
function afficher( message, couleur ) {
    document.querySelector("#message").style.visibility = "";
    document.querySelector("#message").innerHTML = message;
    document.querySelector("#message").style.color = couleur;
}

// met à jour les statistiques
function afficherStat() {
    document.querySelector("#nbParties").innerHTML = nbParties;
    document.querySelector("#nbMoyenEssais").innerHTML = (nbEssais / nbParties).toFixed(2);
    document.querySelector("#meilleurJeu").innerHTML = meilleurJeu;
}

// retourne un nombre aléatoire dans l'intervalle [1, 100]
function generer() {
	return parseInt(Math.random()*100 + 1) 
}
