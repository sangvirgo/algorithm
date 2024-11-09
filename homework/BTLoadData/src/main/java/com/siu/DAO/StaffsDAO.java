package com.siu.DAO;

import com.siu.helper.DatabaseHelper;
import com.siu.model.Staff;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author tansa
 */
public class StaffsDAO {
    public List<Staff> getAll() throws Exception {
        List<Staff> listStaffs=new ArrayList<>();
        String sql ="SELECT * FROM staffs";
        try (
            Connection con= DatabaseHelper.openConnection();
            Statement stmt=con.createStatement();
            ResultSet rs=stmt.executeQuery(sql);
        ) {
            while(rs.next()) {
                Staff tempStaff=new Staff();
                tempStaff.setStaff_id(rs.getInt("staff_id"));
                tempStaff.setFirst_name(rs.getString("first_name"));
                tempStaff.setLast_name(rs.getString("last_name"));
                tempStaff.setEmail(rs.getString("email"));
                tempStaff.setPhone(rs.getString("phone"));
                
                listStaffs.add(tempStaff);
            }
        }
        return listStaffs;
    }
    
    
    
    
    public Staff findByStaffId(int data) throws Exception {
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
