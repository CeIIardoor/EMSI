
window.onload = function () {

	// affiche le nombre "t" dans le span "spanElt"
	// "t" a au plus deux chiffres
	function afficher(t, elem) {
		elem[0].src="images/"+t[0]+".png";
		elem[1].src="images/"+t[1]+".png";
	}

	// met à jour les images de l'horloge
	// à chaque seconde
	function tictac() {
		img = Array.from(document.querySelectorAll("#horloge span img"));

		var dt = new Date();
		heure = dt.getHours().toString();
			if(heure < 10) heure = "0"+heure;
		minute = dt.getMinutes().toString();
			if(minute < 10) minute = "0"+minute;
		seconde = dt.getSeconds().toString();
			if(seconde < 10) seconde = "0"+seconde;
			
		afficher(heure,img.slice(0,2))
		afficher(minute,img.slice(2,4))
		afficher(seconde,img.slice(4,6))
	}

	// ici, il faut lancer l'horloge
	setInterval(tictac,1000);
};