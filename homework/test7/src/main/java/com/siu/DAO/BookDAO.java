/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.siu.DAO;

import com.siu.helper.DatabaseHelper;
import com.siu.model.Book;
import java.util.List;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;

/**
 *
 * @author tansa
 */
public class BookDAO {
    public Book findById(int id) throws Exception {
        String sql="select * from books where book_id=?";
        try(Connection con=DatabaseHelper.openConnection();
                PreparedStatement st=con.prepareStatement(sql);) {
            st.setInt(1, id);
            ResultSet rs=st.executeQuery();
            if(rs.next()) {
                Book result=new Book();
                result.setId(id);
                result.setPrice(rs.getDouble("price"));
                result.setTitle(rs.getString("title"));
                return result;
            }
            return null;
        }
    }
    
    public List<Book> getAll() throws Exception{
        String sql="select * from books";
        try(Connection con = DatabaseHelper.openConnection();
                Statement st=con.createStatement();
                ResultSet rs=st.executeQuery(sql);) {
            List<Book> result=new ArrayList<>();
            while(rs.next()) {
                result.add(new Book(
                        rs.getInt("book_id"),
                        rs.getString("title"),
                        rs.getDouble("price")
                ));
            }
            return result;
        }
        }
}
