/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage;

import java.rmi.Naming;
import java.rmi.RMISecurityManager;
import java.util.ArrayList;

/**
 *
 * @author Mustafa
 */
public class MainframeKlient {
    static int indexMax = 0;

    public static void main(String[] arg) throws Exception {

//        WebserverInterface WSI = (WebserverInterface) Naming.lookup("rmi://ubuntu4.javabog.dk:53712/s153712");
        //WSI.setPassword(un);
        //WSI.setUsername(pw)       
                
                


        System.setSecurityManager(new RMISecurityManager());

        ArrayList<Integer> data = new ArrayList<>();

        //boolean aktiv = true; // Boolean til at se om spillet skal spilles
        SensorGatherI g = (SensorGatherI) Naming.lookup("rmi://ubuntu4.javabog.dk:53713/s153712");

        g.getSensorData();

        for (Integer temp : g.getSensorData()) {
            data.add(temp);
            indexMax++;
        }
        for (int i = 0; i < data.size(); i++) {
            System.out.println("Value at index: " + i + " is " + data.get(i));
        }

        String bruger = "s153712";
        String pass = "yas12!";
        g.setLogin(bruger, pass);

        System.out.println("Username = " + g.getUsername());
        System.out.println("Password = " + g.getPassword());
        System.out.println("Data amount = " + g.getDataAmount());
        System.out.println("ID = " + g.getID());
        System.out.println("Type = " + g.getType());
        System.out.println("Name = " + g.getName());
        System.out.println("Unit = " + g.getUnit());

    }

    //boolean aktiv = true; // Boolean til at se om spillet skal spilles
}