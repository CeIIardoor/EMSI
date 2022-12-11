import Model.Boisson;
import Model.Commande;
import Model.Supplement;

public class Main {
    public static void main(String[] args) {
        Commande commande = new Commande();
        Boisson cafeColombia = new Boisson("Café Colombia", 15, "Café colombien");
        Boisson cafeEthiopia = new Boisson("Café Ethiopia", 20, "Café éthiopien");
        Supplement lait = new Supplement("Lait", 5);
        Supplement chantilly = new Supplement("Chantilly", 7);
        Supplement caramel = new Supplement("Caramel", 4);
        Supplement chocolat = new Supplement("Chocolat", 6);

        cafeEthiopia.addSupplement(lait).addSupplement(chantilly).addSupplement(caramel);
        cafeColombia.addSupplement(caramel).addSupplement(chocolat).addSupplement(caramel);

        commande.addBoisson(cafeColombia).addBoisson(cafeEthiopia);

        System.out.println(commande);

//        CommandesController = new CommandesController();
//        Scanner scanner = new Scanner(System.in);
//
//        commande = commandesController.getCommande();
//
//        int choix = scanner.nextInt();
//        do {
//            MenuPrincipal.afficherMenuPrincipal();
//            switch (choix) {
//                case 1:
//                    commandesController.ajouterCommande();
//                    break;
//                case 2:
//                    CommandesController.afficherCommande();
//                    break;
//                case 3:
//                    CommandesController.afficherToutesLesCommandes();
//                    break;
//                case 4:
//                    break;
//                default:
//                    System.out.println("Choix invalide");
//            }
//        } while (choix != 4);
    }
}