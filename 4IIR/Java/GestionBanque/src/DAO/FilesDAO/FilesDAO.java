package DAO.FilesDAO;

public class FilesDAO {
      public static void init() {
            FileBasePaths.createBasePath();
            FileBasePaths.createFiles();
            FileBasePaths.createHeaders();
      }
}
