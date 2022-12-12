package DecoratorDesignPattern.Decorators;

import DecoratorDesignPattern.Models.Commande;
import DecoratorDesignPattern.Interfaces.ICommande;

public abstract class CommandeDecorator implements ICommande {
    private final ICommande commande;

    public CommandeDecorator(Commande _commande) {
        this.commande = _commande;
    }

    @Override
    public String cout() {
        return commande.cout();
    }

    public double getTotal() {
        return commande.getTotal();
    }
}
