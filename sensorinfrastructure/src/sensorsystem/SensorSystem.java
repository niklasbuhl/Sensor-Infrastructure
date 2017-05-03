/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sensorsystem;

import datasystem.DataControl;
import datasystem.SensorControl;
import datasystem.UserControl;
import dockingsystem.DockPubRMI;
import dockingsystem.DockPubSOAP;
import static java.lang.Boolean.FALSE;
import static java.lang.Boolean.TRUE;
import java.net.MalformedURLException;
import java.rmi.RemoteException;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.logging.Level;
import java.util.logging.Logger;
import securitysystem.UserAuthentication;
import securitysystem.UserAuthenticationInterface;
import ui.UserInterface;

public class SensorSystem {

    UserInterface ui;
    UserAuthentication sec;
    DataControl offdata;
    DataControl expdata;
    SensorControl sensors;
    UserControl users;

    //Michaels ting til AES encryption og handshake af sensor////////////////////////////////////////////////////
    static String IV = "AAAAAAAAAAAAAAAA";
    static String nonsense = "0a1b2c3d4e5f6789"; //(SKAL RANDOMIZES)
    static String decodedNonsense;
    static String XORNonsense;
    static String publicKey = "0123456789abcdef"; //(SKAL RANDOMIZES)
    static String ServerHandshakeLogHash;
    static String ClientHandshakeLogHash;
    static String handshakeLog;
    static String data;
    static int count = 0;

    static XORStrings x = new XORStrings(); //object of XOR functions
    static Crypt c = new Crypt();
    static Hashing h = new Hashing();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    boolean listeningToSensors;

    private Queue<String> incommingBuffer;

    private final Object lock = new Object();

    public SensorSystem(UserInterface _ui, UserAuthentication _sec, DataControl _offdata, DataControl _expdata, UserControl _users, SensorControl _sensors) throws RemoteException, NoSuchAlgorithmException {

        ui = _ui;
        sec = _sec;
        users = _users;
        sensors = _sensors;
        offdata = _offdata;
        expdata = _expdata;

        this.listeningToSensors = true;

        incommingBuffer = new LinkedList<String>();

    }

    public void initialiseSensorDockingSystem() throws NoSuchAlgorithmException, RemoteException, MalformedURLException {

        System.out.println("Setting up sensor communication protocols...");

        System.out.println("Initializing SOAP...");

        DockPubSOAP.publish(ui.isOnline(), this);

        System.out.println("SOAP Running!");

        System.out.println("Setting up RMI...");

        DockPubRMI.publish(ui.isOnline(), this);

        System.out.println("RMI Running!");

        System.out.println("Initializing REST...");

        // REST Publish, Interface, Implementation...
        System.out.println("REST Running!");

        System.out.println("Sensor Communication Protocols Setup is finished!");

    }

    public boolean transferData(String username, String password, String data) {

        System.out.println("Incomming Data!");

        System.out.println("Background checking user...");

        if (sec.login(username, password) && listeningToSensors) {

            System.out.println("Access Granted!");

            System.out.println("Transfering Data...");

            System.out.print("Data: ");

            System.out.println(data);

            synchronized (lock) {

                incommingBuffer.add(data);

            }

            System.out.println("End of transmission.");

            return TRUE;

        } else {

            System.out.println("Access Denied!");

            return FALSE;

        }

    }

    public boolean requestConnection() {
        System.out.println("Sensor is requesting for connection...");
        handshakeLog = "true ";
        count++;
        return true;
    }

    public String getNonsense() {
        handshakeLog = handshakeLog.concat(nonsense) + " ";
        count++;
        System.out.println("Nonsense: "+nonsense);
        return nonsense;
    }

    public String getPublicKey() {
        handshakeLog = handshakeLog.concat(publicKey) + " ";
        return publicKey;
    }

    public void sendCipherInonsense(byte[] encryptedMessage) {
        handshakeLog = handshakeLog.concat(Arrays.toString(encryptedMessage)) + " ";
        count++;
        try {
            XORNonsense = x.encode(nonsense, c.decrypt(encryptedMessage, publicKey, IV));
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    public void sendLogHashCipher(byte[] hashLog) {
        count++;
        try {
            ClientHandshakeLogHash = c.decrypt(hashLog, XORNonsense, IV);
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    public boolean recieveOK() throws NoSuchAlgorithmException {
        ServerHandshakeLogHash = h.stringHash(handshakeLog);
        count++;
        return ServerHandshakeLogHash.hashCode() == ClientHandshakeLogHash.hashCode();
    }

}
