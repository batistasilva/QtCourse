/***
 * To compile from comand line:
 * c++ -o calcserver++ *.cpp
 * To copy to apache cgi folder:
 * sudo cp calcserver++ /usr/lib/cgi-bin/
 */

#include "CalculatorSoap.nsmap"
#include "soapCalculatorSoapService.h"
#include "soapH.h"

int main(int argc, char **argv)
{
    CalculatorSoapService calc;

    if (argc < 2)
        calc.serve();	/* serve as CGI application */
    else
    {
        int port = atoi(argv[1]);
        if (!port)
        {
            fprintf(stderr, "Usage: calcserver++ <port>\n");
            exit(0);
        }
        /* run iterative server on port until fatal error */
        if (calc.run(port))
        {
            calc.soap_stream_fault(std::cerr);
            exit(1);
        }
    }
    return 0;
}


int CalculatorSoapService::Add(_tempuri__Add *tempuri__Add, _tempuri__AddResponse &tempuri__AddResponse){

int result = tempuri__Add->intA + tempuri__Add->intB;
tempuri__AddResponse.AddResult = result;

return SOAP_OK;
}

int CalculatorSoapService::Subtract(_tempuri__Subtract *tempuri__Subtract, _tempuri__SubtractResponse &tempuri__SubtractResponse){
    int result = tempuri__Subtract->intA - tempuri__Subtract->intB;
    tempuri__SubtractResponse.SubtractResult = result;
return SOAP_OK;
}

int CalculatorSoapService::Multiply(_tempuri__Multiply *tempuri__Multiply, _tempuri__MultiplyResponse &tempuri__MultiplyResponse){
    int result = tempuri__Multiply->intA * tempuri__Multiply->intB;
    tempuri__MultiplyResponse.MultiplyResult = result;
return SOAP_OK;
}

int CalculatorSoapService::Divide(_tempuri__Divide *tempuri__Divide, _tempuri__DivideResponse &tempuri__DivideResponse){
    int result = tempuri__Divide->intA / tempuri__Divide->intB;
    tempuri__DivideResponse.DivideResult = result;
return SOAP_OK;
}

int CalculatorSoapService::Add_(_tempuri__Add *tempuri__Add, _tempuri__AddResponse &tempuri__AddResponse){

return SOAP_OK;
}

int CalculatorSoapService::Subtract_(_tempuri__Subtract *tempuri__Subtract, _tempuri__SubtractResponse &tempuri__SubtractResponse){

return SOAP_OK;
}

int CalculatorSoapService::Multiply_(_tempuri__Multiply *tempuri__Multiply, _tempuri__MultiplyResponse &tempuri__MultiplyResponse){

return SOAP_OK;
}


int CalculatorSoapService::Divide_(_tempuri__Divide *tempuri__Divide, _tempuri__DivideResponse &tempuri__DivideResponse){

return SOAP_OK;
}

