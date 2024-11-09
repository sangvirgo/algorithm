/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com;



/**
 *
 * @author tansa
 */
import java.util.List;

interface DAOInterface<T> {
    List<T> getAll() throws Exception;
    boolean insert(T t) throws Exception;
    boolean update(T t) throws Exception;
    T findByMaSV(String t) throws Exception;
    boolean delete(String t) throws Exception;
}