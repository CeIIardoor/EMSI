package DAO;

import java.util.List;

public interface IDAO<T, Number> {
    List<T> getAll();
    T getByID(Number id);

    T save(T t);
    List<T> saveAll(List<T> t);
    T update(T t);
    boolean delete(T t);

    boolean deleteByID(Number id);
}
