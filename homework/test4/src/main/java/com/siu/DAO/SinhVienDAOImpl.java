/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.siu.DAO;

import com.siu.helper.DatabaseHelper;
import com.siu.model.SinhVien;
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
public class SinhVienDAOImpl implements SinhVienDAO<SinhVien>{
    @Override
    public List<SinhVien> getAll() throws Exception {
        String sql="select * from SinhVien order by MaSV";
        try(Connection con=DatabaseHelper.openConnection();
                Statement stm=con.createStatement();
                ResultSet rs=stm.executeQuery(sql)) {
            List<SinhVien> result=new ArrayList<>();
            while(rs.next()) {
                SinhVien temp=new SinhVien();
                temp.setMaSV(rs.getString("MaSV"));
                temp.setHoLot(rs.getString("Holot"));
                temp.setTen(rs.getString("Ten"));
                temp.setMaLop(rs.getString("Malop"));
                temp.setTenLop(rs.getString("Tenlop"));
                temp.setSoDT(rs.getString("SoDT"));
                temp.setEmail(rs.getString("Email"));
                result.add(temp);
            }
            return result;
        }
    }
    
    @Override
    public boolean insert(SinhVien temp) throws Exception {
        String sql = "insert into SinhVien(MaSV,Holot,Ten,Malop,Tenlop,SoDT,Email) values (?,?,?,?,?,?,?)";
        try(Connection con=DatabaseHelper.openConnection();
                PreparedStatement pstm=con.prepareStatement(sql);) {
            pstm.setString(1, temp.getMaSV());
            pstm.setString(2, temp.getHoLot());
            pstm.setString(3, temp.getTen());
            pstm.setString(4, temp.getMaLop());
            pstm.setString(5, temp.getTenLop());
            pstm.setString(6, temp.getSoDT());
            pstm.setString(7, temp.getEmail());
            return pstm.executeUpdate()>0;
        }
    }
    
    @Override
    public boolean update(SinhVien temp) throws Exception {
        String sql="update SinhVien set Holot=?, Ten=?, Malop=?, Tenlop=?, SoDT=?, Email=? where MaSV=?";
        try(Connection con=DatabaseHelper.openConnection();
                PreparedStatement pstm=con.prepareStatement(sql);) {
            pstm.setString(7, temp.getMaSV());
            pstm.setString(1, temp.getHoLot());
            pstm.setString(2, temp.getTen());
            pstm.setString(3, temp.getMaLop());
            pstm.setString(4, temp.getTenLop());
            pstm.setString(5, temp.getSoDT());
            pstm.setString(6, temp.getEmail());
            return pstm.executeUpdate()>0;
        }
    }
    
    
    @Override
    public boolean delete(String maSV) throws Exception{
        String sql="delete from SinhVien where MaSV=?";
        try(Connection con=DatabaseHelper.openConnection();
                PreparedStatement pstm=con.prepareStatement(sql);) {
            pstm.setString(1, maSV);
            return pstm.executeUpdate()>0;
        }
    }
    
    
    
    
    @Override
    public SinhVien findById(String t) throws Exception {
        String sql="select * from SinhVien where MaSV=?";
        try(Connection con=DatabaseHelper.openConnection();
                PreparedStatement pstm=con.prepareStatement(sql);) {
            pstm.setString(1, t);
            ResultSet rs=pstm.executeQuery();
            if(rs.next()) {
                SinhVien temp=new SinhVien();
                temp.setMaSV(rs.getString("MaSV"));
                temp.setHoLot(rs.getString("Holot"));
                temp.setTen(rs.getString("Ten"));
                temp.setMaLop(rs.getString("Malop"));
                temp.setTenLop(rs.getString("Tenlop"));
                temp.setSoDT(rs.getString("SoDT"));
                temp.setEmail(rs.getString("Email"));
                return temp;
            }
            return null;
        }
    }
}
