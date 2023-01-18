package Swing;

import java.util.ArrayList;

public class TableModel {

    private String[] columnNames;
    private Object[][] data;

    public TableModel(String[] columnNames, Object[][] data) {
        this.columnNames = columnNames;
        this.data = data;
    }

    public String[] getColumnNames() {
        return columnNames;
    }

    public Object[][] getData() {
        return data;
    }

    public void setColumnNames(String[] columnNames) {
        this.columnNames = columnNames;
    }

    public void setData(Object[][] data) {
        this.data = data;
    }

    void initClientsData() {
        ArrayList clients = new ClientsData().getClients();
        data = new Object[clients.size()][columnNames.length];
    }

}
