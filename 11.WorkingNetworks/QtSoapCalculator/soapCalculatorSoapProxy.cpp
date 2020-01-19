/* soapCalculatorSoapProxy.cpp
   Generated by gSOAP 2.8.97 for calculator.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapCalculatorSoapProxy.h"

CalculatorSoapProxy::CalculatorSoapProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	CalculatorSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

CalculatorSoapProxy::CalculatorSoapProxy(const CalculatorSoapProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

CalculatorSoapProxy::CalculatorSoapProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	CalculatorSoapProxy_init(_soap->imode, _soap->omode);
}

CalculatorSoapProxy::CalculatorSoapProxy(struct soap *_soap, const char *soap_endpoint_url)
{	this->soap = _soap;
	this->soap_own = false;
	CalculatorSoapProxy_init(_soap->imode, _soap->omode);
	soap_endpoint = soap_endpoint_url;
}

CalculatorSoapProxy::CalculatorSoapProxy(const char *soap_endpoint_url)
{	this->soap = soap_new();
	this->soap_own = true;
	CalculatorSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = soap_endpoint_url;
}

CalculatorSoapProxy::CalculatorSoapProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	CalculatorSoapProxy_init(iomode, iomode);
}

CalculatorSoapProxy::CalculatorSoapProxy(const char *soap_endpoint_url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	CalculatorSoapProxy_init(iomode, iomode);
	soap_endpoint = soap_endpoint_url;
}

CalculatorSoapProxy::CalculatorSoapProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	CalculatorSoapProxy_init(imode, omode);
}

CalculatorSoapProxy::~CalculatorSoapProxy()
{	if (this->soap_own)
	{	this->destroy();
		soap_free(this->soap);
	}
}

void CalculatorSoapProxy::CalculatorSoapProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL },
        { "SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "tempuri", "http://tempuri.org/", NULL, NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

CalculatorSoapProxy *CalculatorSoapProxy::copy()
{	CalculatorSoapProxy *dup = SOAP_NEW_UNMANAGED(CalculatorSoapProxy);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}

CalculatorSoapProxy& CalculatorSoapProxy::operator=(const CalculatorSoapProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void CalculatorSoapProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void CalculatorSoapProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	CalculatorSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void CalculatorSoapProxy::soap_noheader()
{	this->soap->header = NULL;
}

::SOAP_ENV__Header *CalculatorSoapProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *CalculatorSoapProxy::soap_fault()
{	return this->soap->fault;
}

const char *CalculatorSoapProxy::soap_fault_subcode()
{	return ::soap_fault_subcode(this->soap);
}

const char *CalculatorSoapProxy::soap_fault_string()
{	return ::soap_fault_string(this->soap);
}

const char *CalculatorSoapProxy::soap_fault_detail()
{	return ::soap_fault_detail(this->soap);
}

int CalculatorSoapProxy::soap_close_socket()
{	return ::soap_closesock(this->soap);
}

int CalculatorSoapProxy::soap_force_close_socket()
{	return ::soap_force_closesock(this->soap);
}

void CalculatorSoapProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void CalculatorSoapProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *CalculatorSoapProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int CalculatorSoapProxy::send_Add(const char *soap_endpoint_url, const char *soap_action, _tempuri__Add *tempuri__Add)
{
	struct __tempuri__Add soap_tmp___tempuri__Add;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Add";
	soap_tmp___tempuri__Add.tempuri__Add = tempuri__Add;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Add(soap, &soap_tmp___tempuri__Add);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Add(soap, &soap_tmp___tempuri__Add, "-tempuri:Add", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Add(soap, &soap_tmp___tempuri__Add, "-tempuri:Add", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Add(_tempuri__AddResponse &tempuri__AddResponse)
{
	tempuri__AddResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__AddResponse.soap_get(soap, "tempuri:AddResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int CalculatorSoapProxy::send_Subtract(const char *soap_endpoint_url, const char *soap_action, _tempuri__Subtract *tempuri__Subtract)
{
	struct __tempuri__Subtract soap_tmp___tempuri__Subtract;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Subtract";
	soap_tmp___tempuri__Subtract.tempuri__Subtract = tempuri__Subtract;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Subtract(soap, &soap_tmp___tempuri__Subtract);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Subtract(soap, &soap_tmp___tempuri__Subtract, "-tempuri:Subtract", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Subtract(soap, &soap_tmp___tempuri__Subtract, "-tempuri:Subtract", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Subtract(_tempuri__SubtractResponse &tempuri__SubtractResponse)
{
	tempuri__SubtractResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__SubtractResponse.soap_get(soap, "tempuri:SubtractResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int CalculatorSoapProxy::send_Multiply(const char *soap_endpoint_url, const char *soap_action, _tempuri__Multiply *tempuri__Multiply)
{
	struct __tempuri__Multiply soap_tmp___tempuri__Multiply;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Multiply";
	soap_tmp___tempuri__Multiply.tempuri__Multiply = tempuri__Multiply;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Multiply(soap, &soap_tmp___tempuri__Multiply);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Multiply(soap, &soap_tmp___tempuri__Multiply, "-tempuri:Multiply", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Multiply(soap, &soap_tmp___tempuri__Multiply, "-tempuri:Multiply", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Multiply(_tempuri__MultiplyResponse &tempuri__MultiplyResponse)
{
	tempuri__MultiplyResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__MultiplyResponse.soap_get(soap, "tempuri:MultiplyResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int CalculatorSoapProxy::send_Divide(const char *soap_endpoint_url, const char *soap_action, _tempuri__Divide *tempuri__Divide)
{
	struct __tempuri__Divide soap_tmp___tempuri__Divide;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Divide";
	soap_tmp___tempuri__Divide.tempuri__Divide = tempuri__Divide;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Divide(soap, &soap_tmp___tempuri__Divide);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Divide(soap, &soap_tmp___tempuri__Divide, "-tempuri:Divide", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Divide(soap, &soap_tmp___tempuri__Divide, "-tempuri:Divide", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Divide(_tempuri__DivideResponse &tempuri__DivideResponse)
{
	tempuri__DivideResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__DivideResponse.soap_get(soap, "tempuri:DivideResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int CalculatorSoapProxy::send_Add_(const char *soap_endpoint_url, const char *soap_action, _tempuri__Add *tempuri__Add)
{
	struct __tempuri__Add_ soap_tmp___tempuri__Add_;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Add";
	soap_tmp___tempuri__Add_.tempuri__Add = tempuri__Add;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Add_(soap, &soap_tmp___tempuri__Add_);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Add_(soap, &soap_tmp___tempuri__Add_, "-tempuri:Add", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Add_(soap, &soap_tmp___tempuri__Add_, "-tempuri:Add", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Add_(_tempuri__AddResponse &tempuri__AddResponse)
{
	tempuri__AddResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__AddResponse.soap_get(soap, "tempuri:AddResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int CalculatorSoapProxy::send_Subtract_(const char *soap_endpoint_url, const char *soap_action, _tempuri__Subtract *tempuri__Subtract)
{
	struct __tempuri__Subtract_ soap_tmp___tempuri__Subtract_;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Subtract";
	soap_tmp___tempuri__Subtract_.tempuri__Subtract = tempuri__Subtract;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Subtract_(soap, &soap_tmp___tempuri__Subtract_);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Subtract_(soap, &soap_tmp___tempuri__Subtract_, "-tempuri:Subtract", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Subtract_(soap, &soap_tmp___tempuri__Subtract_, "-tempuri:Subtract", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Subtract_(_tempuri__SubtractResponse &tempuri__SubtractResponse)
{
	tempuri__SubtractResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__SubtractResponse.soap_get(soap, "tempuri:SubtractResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int CalculatorSoapProxy::send_Multiply_(const char *soap_endpoint_url, const char *soap_action, _tempuri__Multiply *tempuri__Multiply)
{
	struct __tempuri__Multiply_ soap_tmp___tempuri__Multiply_;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Multiply";
	soap_tmp___tempuri__Multiply_.tempuri__Multiply = tempuri__Multiply;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Multiply_(soap, &soap_tmp___tempuri__Multiply_);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Multiply_(soap, &soap_tmp___tempuri__Multiply_, "-tempuri:Multiply", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Multiply_(soap, &soap_tmp___tempuri__Multiply_, "-tempuri:Multiply", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Multiply_(_tempuri__MultiplyResponse &tempuri__MultiplyResponse)
{
	tempuri__MultiplyResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__MultiplyResponse.soap_get(soap, "tempuri:MultiplyResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int CalculatorSoapProxy::send_Divide_(const char *soap_endpoint_url, const char *soap_action, _tempuri__Divide *tempuri__Divide)
{
	struct __tempuri__Divide_ soap_tmp___tempuri__Divide_;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.dneonline.com/calculator.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/Divide";
	soap_tmp___tempuri__Divide_.tempuri__Divide = tempuri__Divide;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___tempuri__Divide_(soap, &soap_tmp___tempuri__Divide_);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Divide_(soap, &soap_tmp___tempuri__Divide_, "-tempuri:Divide", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Divide_(soap, &soap_tmp___tempuri__Divide_, "-tempuri:Divide", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int CalculatorSoapProxy::recv_Divide_(_tempuri__DivideResponse &tempuri__DivideResponse)
{
	tempuri__DivideResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__DivideResponse.soap_get(soap, "tempuri:DivideResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
