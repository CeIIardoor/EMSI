<?php
	$login = $_POST[ "login" ];
	$pass1 = $_POST[ "password1" ];
?>
<!DOCTYPE html>
<html lang="fr">
	<head>
		<meta charset="utf-8">
		<title>TP 1 - Exo 4</title>
		<meta name="author" content="Marc Gaetano">
        <link rel="stylesheet" href="css/tp1.css">
	</head>
	<body>
		<h1>TP 1 - Exo 4</h1>
		<hr>

		<h3>Vous êtes bien enregistré !</h3>
		<ul>
			<li>Votre login : <?= $login; ?></li>
			<li>Votre mot de passe : <?= $pass1; ?></li>
		</ul>
	</body>
</html>