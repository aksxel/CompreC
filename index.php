<?php
// Récupération du contenu du webhook GitHub (au format JSON)
$payload = file_get_contents("php://input");

// Vérification que le payload est valide
if (json_decode($payload) === null) {
    http_response_code(400);
    die("Invalid JSON data");
}

// Ajoutez ici la logique pour enregistrer le webhook dans le fichier .log
$log_filename = "webhook.log";

// Formater le webhook pour l'enregistrement dans le fichier log avec la date et l'heure actuelles
$log_entry = date("Y-m-d H:i:s") . " - Webhook received:\n" . $payload . "\n\n";

// Enregistrement du webhook dans le fichier .log
file_put_contents($log_filename, $log_entry, FILE_APPEND | LOCK_EX);

// Réponse au serveur GitHub (facultatif, pour indiquer que le webhook a été traité avec succès)
http_response_code(200);

