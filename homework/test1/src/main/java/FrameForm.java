
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */

/**
 *
 * @author tansa
 */
public class FrameForm extends javax.swing.JFrame {
    ArrayList<SinhVien> students=new ArrayList<>();
//    DefaultTableModel model;
    
    public void addStudent(){
        SinhVien sv=new SinhVien();
        sv.name=txtHoVaTen.getText();
        sv.marks=Double.parseDouble(txtDiem.getText());
        sv.majors=(String)cmbNganh.getSelectedItem();
        this.students.add(sv);
        
        txtHocLuc.setText(sv.getGrade());
        boxPhanThuong.setSelected(sv.isBonus());
    }
    
    public void removeStudent() {
        int id=tbSinhVien.getSelectedRow();
        this.students.remove(id);
    }
    
    public void updateStudent() {
        int id = tbSinhVien.getSelectedRow();
        SinhVien temp=students.get(id);
        temp.name=txtHoVaTen.getText();
        temp.majors=(String)cmbNganh.getSelectedItem();
        temp.marks=Double.parseDouble(txtDiem.getSelectedText());
        txtHocLuc.setText(temp.getGrade());
        boxPhanThuong.setSelected(temp.isBonus());
    }
    
    public void fillToTable() {
        DefaultTableModel model=(DefaultTableModel) tbSinhVien.getModel();
        model.setRowCount(0);
        
        for(SinhVien sv: students) {
            Object[] row =new Object[]{sv.name, sv.marks, sv.majors, sv.getGrade(), sv.isBonus()};
            model.addRow(row);
        }
    }
    
    public void showDetail() {
        int id=tbSinhVien.getSelectedRow();
        if (id ==-1) {
            JOptionPane.showConfirmDialog(null, "Vui long chon mot sinh vien de xem chi tiet");
            return;
        }
        SinhVien temp=students.get(id);
        
        txtHoVaTen.setText(temp.name);
        txtHocLuc.setText(temp.getGrade());
        txtDiem.setText(String.valueOf(temp.marks));
        boxPhanThuong.setSelected(temp.isBonus());
        cmbNganh.setSelectedItem(temp.majors);
    }
    
    
    public void orderByName() {
        Comparator<SinhVien> com =new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return o1.name.compareTo(o2.name);
            }
        };
        Collections.sort(students, com);
    }
    
    public void orderByMark() {
        Comparator<SinhVien> com=new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return Double.compare(o1.marks, o2.marks);
            }
        };
        Collections.sort(students, com);
    }

    /**
     * Creates new form FrameForm
     */
    public FrameForm() {
        setTitle("Quản lý sinh viên");
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        btnThem = new javax.swing.JButton();
        btnXoa = new javax.swing.JButton();
        btnCapNhat = new javax.swing.JButton();
        btnNhapMoi = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        tbSinhVien = new javax.swing.JTable();
        btnTheoTen = new javax.swing.JButton();
        btnTheoDiem = new javax.swing.JButton();
        txtHoVaTen = new javax.swing.JTextField();
        txtDiem = new javax.swing.JTextField();
        cmbNganh = new javax.swing.JComboBox<>();
        txtHocLuc = new javax.swing.JTextField();
        boxPhanThuong = new javax.swing.JCheckBox();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setFont(new java.awt.Font("Segoe UI", 1, 24)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 51, 51));
        jLabel1.setText("Quản lý Sinh Viên");

        jLabel2.setText("HỌ VÀ TÊN");

        jLabel3.setText("ĐIỂM");

        jLabel4.setText("NGÀNH");

        jLabel5.setText("HỌC LỰC");

        btnThem.setText("Thêm");
        btnThem.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnThemActionPerformed(evt);
            }
        });

        btnXoa.setText("Xóa");
        btnXoa.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnXoaActionPerformed(evt);
            }
        });

        btnCapNhat.setText("Cập nhật");
        btnCapNhat.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCapNhatActionPerformed(evt);
            }
        });

        btnNhapMoi.setText("Nhập mới");
        btnNhapMoi.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnNhapMoiActionPerformed(evt);
            }
        });

        tbSinhVien.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null, null},
                {null, null, null, null, null},
                {null, null, null, null, null},
                {null, null, null, null, null}
            },
            new String [] {
                "HỌ VÀ TÊN", "ĐIỂM", "NGÀNH", "HỌC LỰC", "THƯỞNG"
            }
        ) {
            Class[] types = new Class [] {
                java.lang.String.class, java.lang.Double.class, java.lang.String.class, java.lang.String.class, java.lang.String.class
            };

            public Class getColumnClass(int columnIndex) {
                return types [columnIndex];
            }
        });
        tbSinhVien.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                tbSinhVienMouseClicked(evt);
            }
        });
        jScrollPane1.setViewportView(tbSinhVien);

        btnTheoTen.setText("Sắp xếp theo tên");
        btnTheoTen.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnTheoTenActionPerformed(evt);
            }
        });

        btnTheoDiem.setText("Sắp xếp theo điểm");
        btnTheoDiem.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnTheoDiemActionPerformed(evt);
            }
        });

        cmbNganh.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Công nghệ thông tin ", "Công nghệ sinh học", "Công nghệ hóa học", "Kĩ thuật sinh hóa" }));

        txtHocLuc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtHocLucActionPerformed(evt);
            }
        });

        boxPhanThuong.setText("Có phần thưởng?");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(43, 43, 43)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(55, 55, 55))
                                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                        .addComponent(jLabel2)
                                        .addGap(31, 31, 31))
                                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                        .addComponent(jLabel4)
                                        .addGap(50, 50, 50))
                                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                        .addComponent(jLabel5)
                                        .addGap(42, 42, 42)))
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                    .addComponent(txtHoVaTen)
                                    .addComponent(txtDiem, javax.swing.GroupLayout.DEFAULT_SIZE, 599, Short.MAX_VALUE)
                                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                                        .addGap(1, 1, 1)
                                        .addComponent(cmbNganh, javax.swing.GroupLayout.PREFERRED_SIZE, 265, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addComponent(txtHocLuc, javax.swing.GroupLayout.PREFERRED_SIZE, 598, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(boxPhanThuong, javax.swing.GroupLayout.Alignment.LEADING)))
                            .addGroup(layout.createSequentialGroup()
                                .addGap(110, 110, 110)
                                .addComponent(btnThem)
                                .addGap(54, 54, 54)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jLabel1)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(btnXoa)
                                        .addGap(74, 74, 74)
                                        .addComponent(btnCapNhat)
                                        .addGap(86, 86, 86)
                                        .addComponent(btnNhapMoi))))
                            .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 691, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(72, 72, 72)
                        .addComponent(btnTheoTen)
                        .addGap(67, 67, 67)
                        .addComponent(btnTheoDiem)))
                .addContainerGap(44, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(txtHoVaTen, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(txtDiem, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(cmbNganh, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5)
                    .addComponent(txtHocLuc, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addComponent(boxPhanThuong)
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btnThem)
                    .addComponent(btnXoa)
                    .addComponent(btnCapNhat)
                    .addComponent(btnNhapMoi))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 174, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(17, 17, 17)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btnTheoTen)
                    .addComponent(btnTheoDiem))
                .addGap(23, 23, 23))
        );

        txtHocLuc.setEditable(false);

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void txtHocLucActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtHocLucActionPerformed
        // TODO add your handling code herte:
    }//GEN-LAST:event_txtHocLucActionPerformed

    private void btnNhapMoiActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnNhapMoiActionPerformed
        // TODO add your handling code here:
        boxPhanThuong.setSelected(false);
        txtDiem.setText("");
        txtHoVaTen.setText("");
        txtHocLuc.setText("");
        cmbNganh.setSelectedIndex(0);
    }//GEN-LAST:event_btnNhapMoiActionPerformed

    private void btnThemActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnThemActionPerformed
        // TODO add your handling code here:
        addStudent();
        fillToTable();
    }//GEN-LAST:event_btnThemActionPerformed

    private void btnXoaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnXoaActionPerformed
        // TODO add your handling code here:
        removeStudent();
        fillToTable();
    }//GEN-LAST:event_btnXoaActionPerformed

    private void btnCapNhatActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCapNhatActionPerformed
        // TODO add your handling code here:
        updateStudent();
        fillToTable();
    }//GEN-LAST:event_btnCapNhatActionPerformed

    private void tbSinhVienMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_tbSinhVienMouseClicked
        // TODO add your handling code here:
        showDetail();
    }//GEN-LAST:event_tbSinhVienMouseClicked

    private void btnTheoTenActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnTheoTenActionPerformed
        // TODO add your handling code here:
        orderByName();
        fillToTable();
    }//GEN-LAST:event_btnTheoTenActionPerformed

    private void btnTheoDiemActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnTheoDiemActionPerformed
        // TODO add your handling code here:
        orderByMark();
        fillToTable();
    }//GEN-LAST:event_btnTheoDiemActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FrameForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FrameForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FrameForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FrameForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FrameForm().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JCheckBox boxPhanThuong;
    private javax.swing.JButton btnCapNhat;
    private javax.swing.JButton btnNhapMoi;
    private javax.swing.JButton btnThem;
    private javax.swing.JButton btnTheoDiem;
    private javax.swing.JButton btnTheoTen;
    private javax.swing.JButton btnXoa;
    private javax.swing.JComboBox<String> cmbNganh;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable tbSinhVien;
    private javax.swing.JTextField txtDiem;
    private javax.swing.JTextField txtHoVaTen;
    private javax.swing.JTextField txtHocLuc;
    // End of variables declaration//GEN-END:variables
}