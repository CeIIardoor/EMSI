package Validator;

public class FormException extends Exception{
    private String formName;
    private String fieldName;

    public FormException(String formName, String fieldName, String message) {
        super(message);
        this.formName = formName;
        this.fieldName = fieldName;
    }

    public FormException(String message) {
        super(message);
    }
    public FormException() {
        super("Erreur de formulaire");
    }

    public String getFormName() {
        return formName;
    }

    public String getFieldName() {
        return fieldName;
    }

}
