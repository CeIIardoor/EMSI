
window.onload = function () {

	// le "handler" du setTimeout
	let chrono = null;

	// si 'ok' est 'true', alors l'utilisateur
	// a choisi la bonne réponse
	let ok = false;

	// affiche le message 'm' avec la couleur 'c'
	// dans l'élément prévu à cet effet
	function msg(m, c) {
		let messageElt = document.querySelector("#message");
		messageElt.innerHTML = m;
		messageElt.style.color = c;

	}

	// cette fonction est appelée à l'issue
	// du setTimeout
	function stop() {
		chrono = null;
		msg("Trop tard, il faut être plus rapide", "red");
	}

	// traite le "clic" sur un bouton radio
	function verifier() {
		if (chrono == null) {
			if (ok)
				msg("Le temps est écoulé et vous avez déjà donné la bonne réponse !", "green");
			else
				msg("Le temps est écoulé et vous n'avez pas donné la bonne réponse !", "red");
		}
		else if ( this.hasAttribute("data-ok") ) {
			clearTimeout(chrono);
			chrono = null;
			ok = true;
			msg("Bravo, bonne réponse !", "green");
		}
		else
			msg("Mauvaise réponse, réessayez !", "red");
	}

	let inputs = document.querySelectorAll("input");
	for( let i = 0; i < inputs.length; i++ )
		inputs[i].onclick = verifier;

	// lance le setTimeout et stocke
	// le "handler" dans la variable 'chrono'
	chrono = setTimeout(stop, 10000);

};