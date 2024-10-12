/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.bai2;

import java.text.NumberFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Locale;

/**
 *
 * @author soang
 */
public class ThucPham {
    private final String maHang;  
    private String tenHang;
    private double donGia;
    private Calendar nSX;  
    private Calendar hSD;  

    public ThucPham(String maHang) {
        this.maHang = maHang;
    }

    public ThucPham(String maHang, String tenHang, double donGia, Calendar nSX, Calendar hSD) {
        this.maHang = maHang;
        this.tenHang = tenHang;
        this.donGia = donGia;
        this.nSX = nSX;
        this.hSD = hSD;
    }

    public String getMaHang() {
        return maHang;
    }

    public String getTenHang() {
        return tenHang;
    }

    public double getDonGia() {
        return donGia;
    }

    public Calendar getnSX() {
        return nSX;
    }

    public Calendar gethSD() {
        return hSD;
    }

    public void setTenHang(String tenHang) {
        if(tenHang==null || tenHang.trim().isEmpty()) {
            throw new IllegalArgumentException("Tên hàng không được để trống!");
        }
        this.tenHang = tenHang;
    }

    public void setDonGia(double donGia) {
        if (donGia <= 0) {
            throw new IllegalArgumentException("Đơn giá phải lớn hơn 0!");
        }
        this.donGia = donGia;
    }

    public void setnSX(int day, int month, int year) {
        Calendar calendar =Calendar.getInstance();
        calendar.set(year, month-1, day);
        this.nSX=calendar;
    }

    public void sethSD(int day, int month, int year) {
        Calendar calendar =Calendar.getInstance();
        calendar.set(year, month-1, day);
        if(calendar.before(this.getnSX())) {
            throw new IllegalArgumentException("Han su dung phai sau ngay san xuat");
        }
        this.hSD=calendar;
    }
        
    public boolean kiemTraNgay() {
        if(this.getnSX().compareTo(this.gethSD())>0) {
            System.out.println("Ngay het han khong duoc nho hon ngay san xuat");
            return false;
        } else {
            return true;
        }
    }
    
    public boolean kiemTraTenHang() {
        if(this.tenHang.equals("") || this.tenHang.isEmpty()) {
            System.out.println("Ten hang khong duoc de trong");
            return false;
        } else {
            return true;
        }
    }
    
    public void kiemTraHSD() {
        Calendar today =Calendar.getInstance();
        today.getTime();
        SimpleDateFormat simpleDateFormat= new SimpleDateFormat("dd/MM/yyyy");
        String st=simpleDateFormat.format(today.getTime());
        
        if(this.gethSD().compareTo(today)<0) {
            System.out.println("Hom nay la ngay: "+st+", hang da het hang");
        } else {
            System.out.println("Hom nay la ngay: "+st+", hang van con hang");
        }
    }
    
    @Override
    public String toString() {
        Locale locale=new Locale("vi", "VN");
        NumberFormat numberFormat=NumberFormat.getCurrencyInstance(locale);
        
        String str=numberFormat.format(this.getDonGia());
        SimpleDateFormat simpleDateFormat= new SimpleDateFormat("dd/MM/yyyy");
        String str1=simpleDateFormat.format(this.getnSX().getTime());
        String str2=simpleDateFormat.format(this.gethSD().getTime());
        return "Thong tin ve san pham: \nMa hang: " +this.getMaHang()+
                "\nTen hang: "+this.getTenHang()+
                "\nDon gia: "+str +
                "\nNgay san xuat: " +str1+
                "\nNgay su dung: "+str2;
    }

}
