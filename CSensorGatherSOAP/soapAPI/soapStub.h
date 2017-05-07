/* soapStub.h
   Generated by gSOAP 2.8.41 for csoapapi.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#define SOAP_NAMESPACE_OF_ns1	"http://dockingsystem/"

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20841
# error "GSOAP VERSION 20841 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************\
 *                                                                            *
 * Enumeration Types                                                          *
 *                                                                            *
\******************************************************************************/


/* csoapapi.h:130 */
#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (7)
/* xsd:boolean */
enum xsd__boolean {
	xsd__boolean__false_ = 0,
	xsd__boolean__true_ = 1
};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Structs and Unions                                                         *
 *                                                                            *
\******************************************************************************/

struct ns1__NoSuchAlgorithmException;	/* csoapapi.h:175 */
struct ns1__transferDataSOAPResponse;	/* csoapapi.h:319 */
struct ns1__transferDataSOAP;	/* csoapapi.h:377 */
struct ns1__requestConnectionSOAPResponse;	/* csoapapi.h:388 */
struct ns1__requestConnectionSOAP;	/* csoapapi.h:434 */
struct ns1__getNonsenseSOAPResponse;	/* csoapapi.h:445 */
struct ns1__getNonsenseSOAP;	/* csoapapi.h:491 */
struct ns1__getPublicKeySOAPResponse;	/* csoapapi.h:502 */
struct ns1__getPublicKeySOAP;	/* csoapapi.h:553 */
struct ns1__sendCipherInonsenseSOAPResponse;	/* csoapapi.h:564 */
struct ns1__sendCipherInonsenseSOAP;	/* csoapapi.h:612 */
struct ns1__sendLogHashCipherSOAPResponse;	/* csoapapi.h:623 */
struct ns1__sendLogHashCipherSOAP;	/* csoapapi.h:671 */
struct ns1__recieveOKSOAPResponse;	/* csoapapi.h:682 */
struct ns1__recieveOKSOAP;	/* csoapapi.h:733 */

/* csoapapi.h:175 */
#ifndef SOAP_TYPE_ns1__NoSuchAlgorithmException
#define SOAP_TYPE_ns1__NoSuchAlgorithmException (8)
/* complex XSD type 'ns1:NoSuchAlgorithmException': */
struct ns1__NoSuchAlgorithmException {
        /** Optional element 'message' of XSD type 'xsd:string' */
        char *message;
};
#endif

/* csoapapi.h:292 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (9)
/* SOAP_ENV__Detail: */
struct SOAP_ENV__Detail {
        /** Optional element 'ns1:NoSuchAlgorithmException' of XSD type 'ns1:NoSuchAlgorithmException' */
        struct ns1__NoSuchAlgorithmException *ns1__NoSuchAlgorithmException;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
        char *__any;
};
#endif
#endif

/* csoapapi.h:319 */
#ifndef SOAP_TYPE_ns1__transferDataSOAPResponse
#define SOAP_TYPE_ns1__transferDataSOAPResponse (13)
/* complex XSD type 'ns1:transferDataSOAPResponse': */
struct ns1__transferDataSOAPResponse {
        /** Required element 'return' of XSD type 'xsd:boolean' */
        enum xsd__boolean _return_;
};
#endif

/* csoapapi.h:377 */
#ifndef SOAP_TYPE_ns1__transferDataSOAP
#define SOAP_TYPE_ns1__transferDataSOAP (16)
/* complex XSD type 'ns1:transferDataSOAP': */
struct ns1__transferDataSOAP {
        /** Optional element 'arg0' of XSD type 'xsd:string' */
        char *_arg0;
        /** Optional element 'arg1' of XSD type 'xsd:string' */
        char *_arg1;
        /** Optional element 'arg2' of XSD type 'xsd:string' */
        char *_arg2;
        /** Required element 'arg3' of XSD type 'xsd:int' */
        int _arg3;
};
#endif

/* csoapapi.h:388 */
#ifndef SOAP_TYPE_ns1__requestConnectionSOAPResponse
#define SOAP_TYPE_ns1__requestConnectionSOAPResponse (17)
/* complex XSD type 'ns1:requestConnectionSOAPResponse': */
struct ns1__requestConnectionSOAPResponse {
        /** Required element 'return' of XSD type 'xsd:boolean' */
        enum xsd__boolean return_;
};
#endif

/* csoapapi.h:434 */
#ifndef SOAP_TYPE_ns1__requestConnectionSOAP
#define SOAP_TYPE_ns1__requestConnectionSOAP (20)
/* complex XSD type 'ns1:requestConnectionSOAP': */
struct ns1__requestConnectionSOAP {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif

/* csoapapi.h:445 */
#ifndef SOAP_TYPE_ns1__getNonsenseSOAPResponse
#define SOAP_TYPE_ns1__getNonsenseSOAPResponse (21)
/* complex XSD type 'ns1:getNonsenseSOAPResponse': */
struct ns1__getNonsenseSOAPResponse {
        /** Optional element 'return' of XSD type 'xsd:string' */
        char *return_;
};
#endif

/* csoapapi.h:491 */
#ifndef SOAP_TYPE_ns1__getNonsenseSOAP
#define SOAP_TYPE_ns1__getNonsenseSOAP (24)
/* complex XSD type 'ns1:getNonsenseSOAP': */
struct ns1__getNonsenseSOAP {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif

/* csoapapi.h:502 */
#ifndef SOAP_TYPE_ns1__getPublicKeySOAPResponse
#define SOAP_TYPE_ns1__getPublicKeySOAPResponse (25)
/* complex XSD type 'ns1:getPublicKeySOAPResponse': */
struct ns1__getPublicKeySOAPResponse {
        /** Optional element 'return' of XSD type 'xsd:string' */
        char *return_;
};
#endif

/* csoapapi.h:553 */
#ifndef SOAP_TYPE_ns1__getPublicKeySOAP
#define SOAP_TYPE_ns1__getPublicKeySOAP (28)
/* complex XSD type 'ns1:getPublicKeySOAP': */
struct ns1__getPublicKeySOAP {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif

/* csoapapi.h:564 */
#ifndef SOAP_TYPE_ns1__sendCipherInonsenseSOAPResponse
#define SOAP_TYPE_ns1__sendCipherInonsenseSOAPResponse (29)
/* complex XSD type 'ns1:sendCipherInonsenseSOAPResponse': */
struct ns1__sendCipherInonsenseSOAPResponse {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif

/* csoapapi.h:612 */
#ifndef SOAP_TYPE_ns1__sendCipherInonsenseSOAP
#define SOAP_TYPE_ns1__sendCipherInonsenseSOAP (32)
/* complex XSD type 'ns1:sendCipherInonsenseSOAP': */
struct ns1__sendCipherInonsenseSOAP {
        /** Optional element 'arg0' of XSD type 'xsd:string' */
        char *arg0;
};
#endif

/* csoapapi.h:623 */
#ifndef SOAP_TYPE_ns1__sendLogHashCipherSOAPResponse
#define SOAP_TYPE_ns1__sendLogHashCipherSOAPResponse (33)
/* complex XSD type 'ns1:sendLogHashCipherSOAPResponse': */
struct ns1__sendLogHashCipherSOAPResponse {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif

/* csoapapi.h:671 */
#ifndef SOAP_TYPE_ns1__sendLogHashCipherSOAP
#define SOAP_TYPE_ns1__sendLogHashCipherSOAP (36)
/* complex XSD type 'ns1:sendLogHashCipherSOAP': */
struct ns1__sendLogHashCipherSOAP {
        /** Optional element 'arg0' of XSD type 'xsd:string' */
        char *arg0;
};
#endif

/* csoapapi.h:682 */
#ifndef SOAP_TYPE_ns1__recieveOKSOAPResponse
#define SOAP_TYPE_ns1__recieveOKSOAPResponse (37)
/* complex XSD type 'ns1:recieveOKSOAPResponse': */
struct ns1__recieveOKSOAPResponse {
        /** Required element 'return' of XSD type 'xsd:boolean' */
        enum xsd__boolean return_;
};
#endif

/* csoapapi.h:733 */
#ifndef SOAP_TYPE_ns1__recieveOKSOAP
#define SOAP_TYPE_ns1__recieveOKSOAP (40)
/* complex XSD type 'ns1:recieveOKSOAP': */
struct ns1__recieveOKSOAP {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif

/* csoapapi.h:798 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (41)
/* SOAP_ENV__Header: */
struct SOAP_ENV__Header {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif
#endif

/* csoapapi.h:798 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (42)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_ENV__Code {
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
};
#endif
#endif

/* csoapapi.h:798 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (44)
/* SOAP_ENV__Reason: */
struct SOAP_ENV__Reason {
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
};
#endif
#endif

/* csoapapi.h:798 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (45)
/* SOAP_ENV__Fault: */
struct SOAP_ENV__Fault {
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* csoapapi.h:120 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

/* csoapapi.h:120 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* enum xsd__boolean has binding name 'xsd__boolean' for type 'xsd:boolean' */
#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (7)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (45)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (44)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (42)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (41)
#endif

/* struct ns1__recieveOKSOAP has binding name 'ns1__recieveOKSOAP' for type 'ns1:recieveOKSOAP' */
#ifndef SOAP_TYPE_ns1__recieveOKSOAP
#define SOAP_TYPE_ns1__recieveOKSOAP (40)
#endif

/* struct ns1__recieveOKSOAPResponse has binding name 'ns1__recieveOKSOAPResponse' for type 'ns1:recieveOKSOAPResponse' */
#ifndef SOAP_TYPE_ns1__recieveOKSOAPResponse
#define SOAP_TYPE_ns1__recieveOKSOAPResponse (37)
#endif

/* struct ns1__sendLogHashCipherSOAP has binding name 'ns1__sendLogHashCipherSOAP' for type 'ns1:sendLogHashCipherSOAP' */
#ifndef SOAP_TYPE_ns1__sendLogHashCipherSOAP
#define SOAP_TYPE_ns1__sendLogHashCipherSOAP (36)
#endif

/* struct ns1__sendLogHashCipherSOAPResponse has binding name 'ns1__sendLogHashCipherSOAPResponse' for type 'ns1:sendLogHashCipherSOAPResponse' */
#ifndef SOAP_TYPE_ns1__sendLogHashCipherSOAPResponse
#define SOAP_TYPE_ns1__sendLogHashCipherSOAPResponse (33)
#endif

/* struct ns1__sendCipherInonsenseSOAP has binding name 'ns1__sendCipherInonsenseSOAP' for type 'ns1:sendCipherInonsenseSOAP' */
#ifndef SOAP_TYPE_ns1__sendCipherInonsenseSOAP
#define SOAP_TYPE_ns1__sendCipherInonsenseSOAP (32)
#endif

/* struct ns1__sendCipherInonsenseSOAPResponse has binding name 'ns1__sendCipherInonsenseSOAPResponse' for type 'ns1:sendCipherInonsenseSOAPResponse' */
#ifndef SOAP_TYPE_ns1__sendCipherInonsenseSOAPResponse
#define SOAP_TYPE_ns1__sendCipherInonsenseSOAPResponse (29)
#endif

/* struct ns1__getPublicKeySOAP has binding name 'ns1__getPublicKeySOAP' for type 'ns1:getPublicKeySOAP' */
#ifndef SOAP_TYPE_ns1__getPublicKeySOAP
#define SOAP_TYPE_ns1__getPublicKeySOAP (28)
#endif

/* struct ns1__getPublicKeySOAPResponse has binding name 'ns1__getPublicKeySOAPResponse' for type 'ns1:getPublicKeySOAPResponse' */
#ifndef SOAP_TYPE_ns1__getPublicKeySOAPResponse
#define SOAP_TYPE_ns1__getPublicKeySOAPResponse (25)
#endif

/* struct ns1__getNonsenseSOAP has binding name 'ns1__getNonsenseSOAP' for type 'ns1:getNonsenseSOAP' */
#ifndef SOAP_TYPE_ns1__getNonsenseSOAP
#define SOAP_TYPE_ns1__getNonsenseSOAP (24)
#endif

/* struct ns1__getNonsenseSOAPResponse has binding name 'ns1__getNonsenseSOAPResponse' for type 'ns1:getNonsenseSOAPResponse' */
#ifndef SOAP_TYPE_ns1__getNonsenseSOAPResponse
#define SOAP_TYPE_ns1__getNonsenseSOAPResponse (21)
#endif

/* struct ns1__requestConnectionSOAP has binding name 'ns1__requestConnectionSOAP' for type 'ns1:requestConnectionSOAP' */
#ifndef SOAP_TYPE_ns1__requestConnectionSOAP
#define SOAP_TYPE_ns1__requestConnectionSOAP (20)
#endif

/* struct ns1__requestConnectionSOAPResponse has binding name 'ns1__requestConnectionSOAPResponse' for type 'ns1:requestConnectionSOAPResponse' */
#ifndef SOAP_TYPE_ns1__requestConnectionSOAPResponse
#define SOAP_TYPE_ns1__requestConnectionSOAPResponse (17)
#endif

/* struct ns1__transferDataSOAP has binding name 'ns1__transferDataSOAP' for type 'ns1:transferDataSOAP' */
#ifndef SOAP_TYPE_ns1__transferDataSOAP
#define SOAP_TYPE_ns1__transferDataSOAP (16)
#endif

/* struct ns1__transferDataSOAPResponse has binding name 'ns1__transferDataSOAPResponse' for type 'ns1:transferDataSOAPResponse' */
#ifndef SOAP_TYPE_ns1__transferDataSOAPResponse
#define SOAP_TYPE_ns1__transferDataSOAPResponse (13)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (9)
#endif

/* struct ns1__NoSuchAlgorithmException has binding name 'ns1__NoSuchAlgorithmException' for type 'ns1:NoSuchAlgorithmException' */
#ifndef SOAP_TYPE_ns1__NoSuchAlgorithmException
#define SOAP_TYPE_ns1__NoSuchAlgorithmException (8)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (47)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (46)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (43)
#endif

/* struct ns1__recieveOKSOAPResponse * has binding name 'PointerTons1__recieveOKSOAPResponse' for type 'ns1:recieveOKSOAPResponse' */
#ifndef SOAP_TYPE_PointerTons1__recieveOKSOAPResponse
#define SOAP_TYPE_PointerTons1__recieveOKSOAPResponse (38)
#endif

/* struct ns1__sendLogHashCipherSOAPResponse * has binding name 'PointerTons1__sendLogHashCipherSOAPResponse' for type 'ns1:sendLogHashCipherSOAPResponse' */
#ifndef SOAP_TYPE_PointerTons1__sendLogHashCipherSOAPResponse
#define SOAP_TYPE_PointerTons1__sendLogHashCipherSOAPResponse (34)
#endif

/* struct ns1__sendCipherInonsenseSOAPResponse * has binding name 'PointerTons1__sendCipherInonsenseSOAPResponse' for type 'ns1:sendCipherInonsenseSOAPResponse' */
#ifndef SOAP_TYPE_PointerTons1__sendCipherInonsenseSOAPResponse
#define SOAP_TYPE_PointerTons1__sendCipherInonsenseSOAPResponse (30)
#endif

/* struct ns1__getPublicKeySOAPResponse * has binding name 'PointerTons1__getPublicKeySOAPResponse' for type 'ns1:getPublicKeySOAPResponse' */
#ifndef SOAP_TYPE_PointerTons1__getPublicKeySOAPResponse
#define SOAP_TYPE_PointerTons1__getPublicKeySOAPResponse (26)
#endif

/* struct ns1__getNonsenseSOAPResponse * has binding name 'PointerTons1__getNonsenseSOAPResponse' for type 'ns1:getNonsenseSOAPResponse' */
#ifndef SOAP_TYPE_PointerTons1__getNonsenseSOAPResponse
#define SOAP_TYPE_PointerTons1__getNonsenseSOAPResponse (22)
#endif

/* struct ns1__requestConnectionSOAPResponse * has binding name 'PointerTons1__requestConnectionSOAPResponse' for type 'ns1:requestConnectionSOAPResponse' */
#ifndef SOAP_TYPE_PointerTons1__requestConnectionSOAPResponse
#define SOAP_TYPE_PointerTons1__requestConnectionSOAPResponse (18)
#endif

/* struct ns1__transferDataSOAPResponse * has binding name 'PointerTons1__transferDataSOAPResponse' for type 'ns1:transferDataSOAPResponse' */
#ifndef SOAP_TYPE_PointerTons1__transferDataSOAPResponse
#define SOAP_TYPE_PointerTons1__transferDataSOAPResponse (14)
#endif

/* struct ns1__NoSuchAlgorithmException * has binding name 'PointerTons1__NoSuchAlgorithmException' for type 'ns1:NoSuchAlgorithmException' */
#ifndef SOAP_TYPE_PointerTons1__NoSuchAlgorithmException
#define SOAP_TYPE_PointerTons1__NoSuchAlgorithmException (10)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stub Functions                                            *
 *                                                                            *
\******************************************************************************/

    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__transferDataSOAP(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_arg0, char *_arg1, char *_arg2, int _arg3, struct ns1__transferDataSOAPResponse *_param_1);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__requestConnectionSOAP(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ns1__requestConnectionSOAPResponse *_param_1);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getNonsenseSOAP(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ns1__getNonsenseSOAPResponse *_param_1);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getPublicKeySOAP(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ns1__getPublicKeySOAPResponse *_param_1);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__sendCipherInonsenseSOAP(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *arg0, struct ns1__sendCipherInonsenseSOAPResponse *_param_1);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__sendLogHashCipherSOAP(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *arg0, struct ns1__sendLogHashCipherSOAPResponse *_param_1);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__recieveOKSOAP(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ns1__recieveOKSOAPResponse *_param_1);

/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/

    /** Web service operation 'ns1__transferDataSOAP' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__transferDataSOAP(struct soap*, char *_arg0, char *_arg1, char *_arg2, int _arg3, struct ns1__transferDataSOAPResponse *_param_1);
    /** Web service operation 'ns1__requestConnectionSOAP' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__requestConnectionSOAP(struct soap*, struct ns1__requestConnectionSOAPResponse *_param_1);
    /** Web service operation 'ns1__getNonsenseSOAP' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__getNonsenseSOAP(struct soap*, struct ns1__getNonsenseSOAPResponse *_param_1);
    /** Web service operation 'ns1__getPublicKeySOAP' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__getPublicKeySOAP(struct soap*, struct ns1__getPublicKeySOAPResponse *_param_1);
    /** Web service operation 'ns1__sendCipherInonsenseSOAP' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__sendCipherInonsenseSOAP(struct soap*, char *arg0, struct ns1__sendCipherInonsenseSOAPResponse *_param_1);
    /** Web service operation 'ns1__sendLogHashCipherSOAP' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__sendLogHashCipherSOAP(struct soap*, char *arg0, struct ns1__sendLogHashCipherSOAPResponse *_param_1);
    /** Web service operation 'ns1__recieveOKSOAP' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__recieveOKSOAP(struct soap*, struct ns1__recieveOKSOAPResponse *_param_1);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__transferDataSOAP(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__requestConnectionSOAP(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__getNonsenseSOAP(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__getPublicKeySOAP(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__sendCipherInonsenseSOAP(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__sendLogHashCipherSOAP(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__recieveOKSOAP(struct soap*);

#ifdef __cplusplus
}
#endif

#endif

/* End of soapStub.h */
