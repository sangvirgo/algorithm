/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.siu.helper;

import java.sql.Connection;
import java.sql.DriverManager;

/**
 *
 * @author tansa
 */
public class DatabaseHelper {
    public static Connection openConnection() throws Exception {
        Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
        String connectionURL="jdbc:sqlserver://localhost:1433;DatabaseName=Java5;encrypt=true;trustServerCertificate=true";
        String username="sa";
        String pass="123";
        return DriverManager.getConnection(connectionURL, username, pass);
    }
}
