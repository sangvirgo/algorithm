/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai4;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class BienLai extends KhachHang{
    private int chiSoCu;
    private int chiSoMoi;
    private int soTienPhaiTra;
    public BienLai(){
        super();
        this.chiSoCu = 0;
        this.chiSoMoi = 0;
        this.soTienPhaiTra = 0;
    }
    public BienLai(String hoVaTen, String soNha, String maSoCongTo, int chiSoCu, int chiSoMoi, int soTienPhaiTra) {
        super(hoVaTen, soNha, maSoCongTo);
        this.chiSoCu = chiSoCu;
        this.chiSoMoi = chiSoMoi;
        this.soTienPhaiTra = soTienPhaiTra;
    }

    public int getChiSoCu() {
        return chiSoCu;
    }

    public void setChiSoCu(int chiSoCu) {
        this.chiSoCu = chiSoCu;
    }

    public int getChiSoMoi() {
        return chiSoMoi;
    }

    public void setChiSoMoi(int chiSoMoi) {
        this.chiSoMoi = chiSoMoi;
    }

    public int getSoTienPhaiTra() {
        return soTienPhaiTra;
    }

    public void setSoTienPhaiTra(int soTienPhaiTra) {
        this.soTienPhaiTra = soTienPhaiTra;
    }

    public void nhap() {
        Scanner sc=new Scanner(System.in);
        super.nhap();
        System.out.println("Nhap chi so cu: ");
        chiSoCu = sc.nextInt();
        System.out.println("Nhap chi so moi: ");
        chiSoMoi = sc.nextInt();
    }
    public long tinhTien(){
        return (chiSoMoi - chiSoCu)*1500;
    }

    public void xuat() {
        super.xuat();
        System.out.println("Chi so cu: "+chiSoCu);
        System.out.println("Chi so moi: "+chiSoMoi);
        System.out.println("So tien phai tra: "+tinhTien());
    }
}
