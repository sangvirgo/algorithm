/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package com.siu.DAO;

import java.util.List;

/**
 *
 * @author tansa
 */
public interface SinhVienDAO<T> {
    List<T> getAll() throws Exception;
    boolean insert(T temp) throws Exception;
    boolean update(T temp) throws Exception;
    boolean delete(String t) throws Exception;
    T findById(String t) throws Exception;
}
