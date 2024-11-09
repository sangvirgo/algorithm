/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

public class SinhVienDAOinter implements DAOInterface<SinhVien> {
    @Override
    public List<SinhVien> getAll() throws Exception {
        List<SinhVien> lstSinhvien = new ArrayList<>();
        String sql = "SELECT * FROM SinhVien";
        try (Connection con = DatabaseHelper.openConnection();
             Statement stmt = con.createStatement();
             ResultSet rs = stmt.executeQuery(sql)) {
            while (rs.next()) {
                SinhVien sv = new SinhVien();
                sv.setMaSV(rs.getString("MaSV"));
                sv.setHolot(rs.getString("Holot"));
                sv.setTen(rs.getString("Ten"));
                sv.setMalop(rs.getString("Malop"));
                sv.setTenlop(rs.getString("Tenlop"));
                sv.setSoDT(rs.getString("SoDT"));
                sv.setEmail(rs.getString("Email"));
                lstSinhvien.add(sv);
            }
        }
        return lstSinhvien;
    }

    @Override
public boolean insert(SinhVien t) throws Exception {
    String sql = "INSERT INTO SinhVien(MaSV,Holot,Ten,Malop,Tenlop,SoDT,Email) VALUES (?,?,?,?,?,?,?)";
    try (Connection con = DatabaseHelper.openConnection();
         PreparedStatement pstm = con.prepareStatement(sql)) {
        pstm.setString(1, t.getMaSV());
        pstm.setString(2, t.getHolot());
        pstm.setString(3, t.getTen());
        pstm.setString(4, t.getMalop());
        pstm.setString(5, t.getTenlop());
        pstm.setString(6, t.getSoDT());
        pstm.setString(7, t.getEmail());

        // Kiểm tra log trước khi thực hiện chèn dữ liệu
        System.out.println("Inserting: " + t);

        int result = pstm.executeUpdate();
        if (result > 0) {
            System.out.println("Insert successful.");
        } else {
            System.out.println("Insert failed.");
        }

        return result > 0;
    }
}


    @Override
    public boolean update(SinhVien t) throws Exception {
        String sql = "UPDATE SinhVien SET Holot = ?, Ten = ?, Malop = ?, Tenlop = ?, SoDT = ?, Email = ? WHERE MaSV = ?";
        try (Connection con = DatabaseHelper.openConnection();
             PreparedStatement pstm = con.prepareStatement(sql)) {
            pstm.setString(7, t.getMaSV());
            pstm.setString(1, t.getHolot());
            pstm.setString(2, t.getTen());
            pstm.setString(3, t.getMalop());
            pstm.setString(4, t.getTenlop());
            pstm.setString(5, t.getSoDT());
            pstm.setString(6, t.getEmail());
            return pstm.executeUpdate() > 0;
        }
    }

    @Override
    public SinhVien findByMaSV(String t) throws Exception {
        String sql = "SELECT * FROM SinhVien WHERE MaSV = ?";
        try (Connection con = DatabaseHelper.openConnection();
             PreparedStatement pstm = con.prepareStatement(sql)) {
            pstm.setString(1, t);
            ResultSet rs = pstm.executeQuery();
            if (rs.next()) {
                SinhVien sv = new SinhVien();
                sv.setMaSV(rs.getString("MaSV"));
                sv.setHolot(rs.getString("Holot"));
                sv.setTen(rs.getString("Ten"));
                sv.setMalop(rs.getString("Malop"));
                sv.setTenlop(rs.getString("Tenlop"));
                sv.setSoDT(rs.getString("SoDT"));
                sv.setEmail(rs.getString("Email"));
                return sv;
            }
        }
        return null;
    }

    @Override
    public boolean delete(String t) throws Exception {
        String sql = "DELETE FROM SinhVien WHERE MaSV = ?";
        try (Connection con = DatabaseHelper.openConnection();
             PreparedStatement pstm = con.prepareStatement(sql)) {
            pstm.setString(1, t);
            return pstm.executeUpdate() > 0;
        }
    }
}