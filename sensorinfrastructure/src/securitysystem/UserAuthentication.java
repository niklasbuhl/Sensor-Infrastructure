/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package securitysystem;

import brugerautorisation.transport.soap.Brugeradmin;
import java.net.MalformedURLException;
import java.net.URL;
import javax.jws.WebService;
import javax.xml.namespace.QName;
import javax.xml.ws.Service;

@WebService(endpointInterface = "securitysystem.UserAuthenticationInterface")
public class UserAuthentication implements UserAuthenticationInterface{
    
    @Override
    public boolean login(String name, String pass) {

        Brugeradmin ba;

        try {
            URL url = new URL("http://javabog.dk:9901/brugeradmin?wsdl");
            QName qname = new QName("http://soap.transport.brugerautorisation/", "BrugeradminImplService");
            Service service = Service.create(url, qname);
            ba = service.getPort(Brugeradmin.class);
        } catch (MalformedURLException e1) {
            e1.printStackTrace();
            return false;
        }
        try {
            ba.hentBruger(name, pass);
            return true;

        } catch (IllegalArgumentException e) {
            e.printStackTrace();
        }

        return false;

    }

}