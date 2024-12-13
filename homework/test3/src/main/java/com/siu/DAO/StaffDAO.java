/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.siu.DAO;

import com.siu.helper.DatabaseHelper;
import com.siu.model.Staff;
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
public class StaffDAO {
    public List<Staff> getAll() throws Exception {
        List<Staff> temp=new ArrayList<>();
        String sql= "select * from staffs order by staff_id";
        try (Connection con = DatabaseHelper.openConnection();
            Statement stms=con.createStatement();
            ResultSet rs=stms.executeQuery(sql);) {
            while(rs.next()) {
                Staff staffTemp=new Staff();
                staffTemp.setStaff_id(rs.getInt("staff_id"));
                staffTemp.setFirst_name(rs.getString("first_name"));
                staffTemp.setLast_name(rs.getString("last_name"));
                temp.add(staffTemp);
            }
               return temp;
        }
    }
    
    public Staff findById(int data) throws Exception {
        String sql="SELECT * FROM staffs WHERE staff_id= ?";
        try (
            Connection con=DatabaseHelper.openConnection();
            PreparedStatement pstm=con.prepareStatement(sql);
        ) {
            pstm.setInt(1, data);
            ResultSet rs=pstm.executeQuery();
            if(rs.next()) {
                Staff tempStaff=new Staff();
                tempStaff.setStaff_id(rs.getInt("staff_id"));
                tempStaff.setFirst_name(rs.getString("first_name"));
                tempStaff.setLast_name(rs.getString("last_name"));
                tempStaff.setEmail(rs.getString("email"));
                tempStaff.setPhone(rs.getString("phone"));
                return tempStaff;
            } 
        return null;
        }
    }
}
