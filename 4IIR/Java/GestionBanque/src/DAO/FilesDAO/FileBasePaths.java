package DAO.FilesDAO;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public interface FileBasePaths {
    Path BASE_FOLDER = new File("src\\DB\\").toPath();
    File CLIENTS_PATH = new File(BASE_FOLDER + "\\clients.txt");
    File COMPTES_PATH = new File(BASE_FOLDER + "\\comptes.txt");
    File AGENCES_PATH = new File(BASE_FOLDER + "\\agences.txt");
    File LOGS_PATH = new File(BASE_FOLDER + "\\logs.txt");


    static void createBasePath() {
        if (!BASE_FOLDER.toFile().exists()) {
            if (BASE_FOLDER.toFile().mkdir()) {
                System.out.println(BASE_FOLDER + " created");
            } else {
                System.out.println(BASE_FOLDER + " creation failed");
            }
        }
    }

    static void createFiles() {
        try {
            if (!CLIENTS_PATH.exists()) {
                if ((CLIENTS_PATH.createNewFile())) {
                    System.out.println("Fichier " + CLIENTS_PATH + " créé");
                } else {
                    System.out.println("Fichier " + CLIENTS_PATH + " non créé");
                }
            } else {
                System.out.println("Fichier " + CLIENTS_PATH + " existe déjà");
            }
            if (!COMPTES_PATH.exists()) {
                if ((COMPTES_PATH.createNewFile())) {
                    System.out.println("Fichier " + COMPTES_PATH + " créé");
                } else {
                    System.out.println("Fichier " + COMPTES_PATH + " non créé");
                }
            } else {
                System.out.println("Fichier " + COMPTES_PATH + " existe déjà");
            }
            if (!AGENCES_PATH.exists()) {
                if ((AGENCES_PATH.createNewFile())) {
                    System.out.println("Fichier " + AGENCES_PATH + " créé");
                } else {
                    System.out.println("Fichier " + AGENCES_PATH + " non créé");
                }
            } else {
                System.out.println("Fichier " + AGENCES_PATH + " existe déjà");
            }
            if (!LOGS_PATH.exists()) {
                if ((LOGS_PATH.createNewFile())) {
                    System.out.println("Fichier " + LOGS_PATH + " créé");
                } else {
                    System.out.println("Fichier " + LOGS_PATH + " non créé");
                }
            } else {
                System.out.println("Fichier " + LOGS_PATH + " existe déjà");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    static void createHeaders(){
        try {
            if (CLIENTS_PATH.length() == 0) {
                Files.write(CLIENTS_PATH.toPath(), ("idClient;nom;prenom;email;login;password;journalisation;comptes;dateAjout").getBytes());
            }
            if (COMPTES_PATH.length() == 0) {
                Files.write(COMPTES_PATH.toPath(), ("idCompte;idClient;solde;dateAjout").getBytes());
            }
            if (AGENCES_PATH.length() == 0) {
                Files.write(AGENCES_PATH.toPath(), ("idAgence;nom;adresse;ville;codePostal;dateAjout").getBytes());
            }
            if (LOGS_PATH.length() == 0) {
                Files.write(LOGS_PATH.toPath(), ("idLog;date;action;idClient").getBytes());
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}