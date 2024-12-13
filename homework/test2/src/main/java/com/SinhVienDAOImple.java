///*
// * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
// * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
// */
//package com;
//
//import java.sql.Connection;
//import java.sql.PreparedStatement;
//import java.sql.ResultSet;
//import java.sql.Statement;
//import java.util.ArrayList;
//import java.util.List;
//
///**
// *
// * @author tansa
// */
//public class SinhVienDAOImple implements SinhVienDAOInterface<SinhVien>{
//    @Override
//    public List<SinhVien> getAll() throws Exception {
//        List<SinhVien> listSinhVien=new ArrayList<>();
//        String sql ="SELECT * FROM SinhVien ORDER BY MaSV";
//        try (
//            Connection con = DatabaseHelper.openConnection();
//            Statement stmt=con.createStatement();
//            ResultSet rs=stmt.executeQuery(sql);
//        ) {
//        while(rs.next()) {
//            SinhVien sv=new SinhVien();
//            sv.setMaSV(rs.getString("MaSV"));
//            sv.setHoLot(rs.getString("Holot"));
//            sv.setEmail(rs.getString("Email"));
//            sv.setSoDT(rs.getString("SoDT"));
//            sv.setTen(rs.getString("Ten"));
//            sv.setMaLop(rs.getString("Malop"));
//            sv.setTenLop(rs.getString("Tenlop"));
//            listSinhVien.add(sv);
//        }
//        return listSinhVien;
//    }
//    }    
//    @Override
//    public boolean insert(SinhVien stu) throws Exception {
//        String sql ="INSERT INTO SinhVien(MaSV, Holot, Ten, Malop, Tenlop, SoDT, Email) VALUES(?,?,?,?,?,?,?)";
//        try (
//            Connection con= DatabaseHelper.openConnection();
//            PreparedStatement pstm=con.prepareStatement(sql);
//        ) {
//            pstm.setString(1, stu.getMaSV());
//            pstm.setString(2, stu.getHoLot());
//            pstm.setString(3, stu.getTen());
//            pstm.setString(4, stu.getMaLop());
//            pstm.setString(5, stu.getTenLop());
//            pstm.setString(6, stu.getSoDT());
//            pstm.setString(7, stu.getEmail());
//            return pstm.executeUpdate()>0;
//        }
//    }
//    @Override
//    public boolean update(SinhVien stu) throws Exception {
//        String sql = "UPDATE SinhVien SET Holot=?, Ten=?, Malop=?, Tenlop=?, SoDT=?, Email=? WHERE MaSV=?";
//        try (
//            Connection con=DatabaseHelper.openConnection();
//            PreparedStatement pstm=con.prepareStatement(sql);
//        ) {
//            pstm.setString(7, stu.getMaSV());
//            pstm.setString(1, stu.getHoLot());
//            pstm.setString(2, stu.getTen());
//            pstm.setString(3, stu.getMaLop());
//            pstm.setString(4, stu.getTenLop());
//            pstm.setString(5, stu.getSoDT());
//            pstm.setString(6, stu.getEmail());
//            
//            return pstm.executeUpdate()>0;
//        }
//    }
//    @Override
//    public SinhVien findByMaSV(String maSV) throws Exception {
//        String sql ="SELECT * FROM SinhVien WHERE MaSV=?";
//        try (
//            Connection con = DatabaseHelper.openConnection();
//            PreparedStatement pstm=con.prepareStatement(sql);
//        ) {
//            pstm.setString(1, maSV);
//            ResultSet rs=pstm.executeQuery();
//            if (rs.next()) {
//                SinhVien sv= new SinhVien();
//                sv.setMaSV(rs.getString("MaSV"));
//                sv.setHoLot(rs.getString("Holot"));
//                sv.setEmail(rs.getString("Email"));
//                sv.setSoDT(rs.getString("SoDT"));
//                sv.setTen(rs.getString("Ten"));
//                sv.setMaLop(rs.getString("Malop"));
//                sv.setTenLop(rs.getString("Tenlop"));
//                return sv;
//            }
//            return null;
//        }
//    }
//    
//    @Override
//    public boolean delete(String maSV) throws Exception{
//        String sql ="DELETE FROM SinhVien WHERE MaSV=?";
//        try (
//                Connection con=DatabaseHelper.openConnection();
//                PreparedStatement pstm= con.prepareStatement(sql);
//        ) {
//            pstm.setString(1, maSV);
//            return pstm.executeUpdate()>0;
//        }
//    }
//}
