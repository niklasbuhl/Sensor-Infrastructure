/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dockingsystem;

import javax.jws.WebMethod;
import javax.jws.WebService;
import javax.jws.soap.SOAPBinding;

@WebService

@SOAPBinding(style = SOAPBinding.Style.RPC)

public interface DockIntSOAP {
    
    @WebMethod boolean transferDataSOAP(String username, String password, String data, int count);
    

}