package Swing;

import javax.swing.*;

public class TablePanel extends JPanel {

    private JTable table;
    private JScrollPane scrollPane;

    public TablePanel(TableModel tableModel) {
        table = new JTable(tableModel.getData(), tableModel.getColumnNames());
        scrollPane = new JScrollPane(table);
        add(scrollPane);
    }

    public JTable getTable() {
        return table;
    }

    public JScrollPane getScrollPane() {
        return scrollPane;
    }

    public void setTable(JTable table) {
        this.table = table;
    }

    public void setScrollPane(JScrollPane scrollPane) {
        this.scrollPane = scrollPane;
    }

}
