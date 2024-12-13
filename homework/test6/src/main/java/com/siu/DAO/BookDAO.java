/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.siu.DAO;

import com.siu.helper.DatabaseHelper;
import com.siu.model.Book;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author tansa
 */
public class BookDAO {
    public List<Book> getAll() throws Exception {
        String sql="select * from books order by book_id";
        try(Connection con=DatabaseHelper.openConnection();
                Statement st=con.createStatement();
                ResultSet rs=st.executeQuery(sql)) {
                List<Book> result=new ArrayList<>();
            while(rs.next()) {
                Book temp=new Book();
                temp.setId(rs.getInt("book_id"));
                temp.setTitle(rs.getString("title"));
                temp.setPrice(rs.getDouble("price"));
                result.add(temp);
            }
            return result;
        }
    }
    
    public List<Book> findById(String title) throws Exception {
        String sql="select * from books where title=?";
        try(Connection con=DatabaseHelper.openConnection();
                PreparedStatement pstm=con.prepareStatement(sql)) {
            pstm.setString(1, title);
            ResultSet rs=pstm.executeQuery();
            List<Book> result=new ArrayList<>();
            while(rs.next()) {
                Book temp=new Book();
                temp.setId(rs.getInt("book_id"));
                temp.setTitle(rs.getString("title"));
                temp.setPrice(rs.getDouble("price"));
                result.add(temp);
            }
            return result;
        }
    }
    
    public boolean delete(int id) throws Exception{
        String sql="delete from books where book_id=?";
        try(Connection con = DatabaseHelper.openConnection();
                PreparedStatement pstm=con.prepareStatement(sql)) {
            pstm.setInt(1, id);
            return pstm.executeUpdate()>0;
        }
    }
}
