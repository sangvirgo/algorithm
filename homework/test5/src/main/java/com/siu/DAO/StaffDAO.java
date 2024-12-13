/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.siu.DAO;

import com.siu.helper.DatabaseHelper;
import com.siu.model.Staff;
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
public class StaffDAO {
    public List<Staff> getAll() throws Exception{
        String sql="select * from staffs";
        try(Connection con=DatabaseHelper.openConnection();
                Statement stmt=con.createStatement();
                ResultSet rs=stmt.executeQuery(sql);) {
            List<Staff> result=new ArrayList<>();
            while(rs.next()) {
                Staff temp=new Staff();
                temp.setStaff_id(rs.getInt("staff_id"));
                temp.setFirst_name(rs.getString("first_name"));
                temp.setLast_name(rs.getString("last_name"));
                result.add(temp);
            }
            return result;
        }
    }
    
    public Staff findById(int data) throws Exception {
        String sql="select * from staffs where staff_id=?";
        try (Connection con =DatabaseHelper.openConnection();
                PreparedStatement pstm=con.prepareStatement(sql);) {
            pstm.setInt(1, data);
            ResultSet rs=pstm.executeQuery();
            Staff temp=new Staff();
            if(rs.next()) {
                temp.setStaff_id(rs.getInt("staff_id"));
                temp.setFirst_name(rs.getString("first_name"));
                temp.setLast_name(rs.getString("last_name"));
                temp.setPhone(rs.getString("phone"));
                temp.setEmail(rs.getString("email"));
                return temp;
            }
            return null;
        } 
    }
}
