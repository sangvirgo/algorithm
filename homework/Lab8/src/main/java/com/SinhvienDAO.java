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

/**
 *
 * @author tansa
 */
public class SinhvienDAO {
public static SinhvienDAO getInstance(){
return new SinhvienDAO();
}
public List<SinhVien> getAll() throws Exception {
List<SinhVien> lstSinhvien = new ArrayList<>();
String sql = "select * from SinhVien order by MaSV";
try (
Connection con = DatabaseHelper.openConnection();
Statement stmt = con.createStatement();
ResultSet rs = stmt.executeQuery(sql);) {
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
return lstSinhvien;
}

}

public boolean insert(SinhVien stud) throws Exception {
String sql = "insert into SinhVien(MaSV,Holot,Ten,Malop,Tenlop,SoDT,Email) values (?,?,?,?,?,?,?)";
try (
Connection con = DatabaseHelper.openConnection();
PreparedStatement pstm = con.prepareStatement(sql);)
{
pstm.setString(1, stud.getMaSV());
pstm.setString(2, stud.getHolot());
pstm.setString(3, stud.getTen());
pstm.setString(4, stud.getMalop());
pstm.setString(5, stud.getTenlop());
pstm.setString(6, stud.getSoDT());
pstm.setString(7, stud.getEmail());
return pstm.executeUpdate() > 0;
}

}
public boolean update(SinhVien stud) throws Exception {
String sql = "Update SinhVien set Holot = ? ,Ten =? ,Malop =?,Tenlop=?,SoDT=?,Email=? where MaSV=?";
try (
Connection con = DatabaseHelper.openConnection();
PreparedStatement pstm = con.prepareStatement(sql);)
{
pstm.setString(7, stud.getMaSV());
pstm.setString(1, stud.getHolot());
pstm.setString(2, stud.getTen());
pstm.setString(3, stud.getMalop());

pstm.setString(4, stud.getTenlop());
pstm.setString(5, stud.getSoDT());
pstm.setString(6, stud.getEmail());

return pstm.executeUpdate() > 0;
}

}

public SinhVien findByMaSV(String maSV) throws Exception {
String sql = "select * from SinhVien where MaSV= ?";
try (
Connection con = DatabaseHelper.openConnection();
PreparedStatement pstm = con.prepareStatement(sql);)
{
pstm.setString(1, maSV);
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

return null;

}

}

public boolean delete(String maSV) throws Exception {
String sql = "delete from SinhVien where MaSV= ?";
try (
Connection con = DatabaseHelper.openConnection();
PreparedStatement pstm = con.prepareStatement(sql);)
{
pstm.setString(1, maSV);
return pstm.executeUpdate() > 0;
}
}
}