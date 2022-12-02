package Model;

import java.util.ArrayList;
import java.util.List;

public class CollectionCD {
    private List<CD> cds;

    private String nomCollection;

    public CollectionCD() {
        cds = new ArrayList<>();
    }

    public List<CD> getCds() {
        return cds;
    }

}
