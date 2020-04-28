#ifndef SAX_ERRORHANDLER_HPP
#define SAX_ERRORHANDLER_HPP

#include <SAX/ErrorHandler.hpp>
#include <SAX/Locator.hpp>
#include <SAX/ArabicaConfig.hpp>
#include <iostream>
#include <string>

class SAXErrorHandler : public Arabica::SAX::ErrorHandler<std::string>
{
private:
    std::string saxParser;

public:
    SAXErrorHandler()
    {
#ifdef ARABICA_USE_LIBXML2
        saxParser = "Libxml2";
#elif defined(ARABICA_USE_MSXML)
        saxParser = "MSXML";
#else
        saxParser = "SAX Parser";
#endif
    };

    ~SAXErrorHandler(){};

    void warning(const SAXParseExceptionT& exception){};

    void error(const SAXParseExceptionT& exception)
    {
        std::cerr << saxParser << " encountered an Error:\n" << exception.what() << std::endl;
        throw(exception); // SAXParseException is an std::runtime_error
    };

    void fatalError(const SAXParseExceptionT& exception)
    {
        std::cerr << saxParser << " encountered a Fatal Error:\n" << exception.what() << std::endl;
        throw(exception); // SAXParseException is an std::runtime_error
    };
};

#endif //SAX_ERRORHANDLER_HPP
