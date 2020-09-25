#ifndef StateVariablesVersion_H
#define StateVariablesVersion_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "String.hpp"

namespace CIMPP {


class Date;
	/*
	Version details.
	*/
	class StateVariablesVersion: public BaseClass
	{

	public:
					CIMPP::String baseUML; 	/* Base UML provided by CIM model manager. Default: '' */
					CIMPP::String baseURI; 	/* Profile URI used in the Model Exchange header and defined in IEC standards.  It uniquely identifies the Profile and its version. It is given for information only and to identify the closest IEC profile to which this CGMES profile is based on. Default: '' */
					CIMPP::Date* date; 	/* Profile creation date Form is YYYY-MM-DD for example for January 5, 2009 it is 2009-01-05. Default: '' */
					CIMPP::String differenceModelURI; 	/* Difference model URI defined by IEC 61970-552. Default: '' */
					CIMPP::String entsoeUML; 	/* UML provided by ENTSO-E. Default: '' */
					CIMPP::String entsoeURI; 	/* Profile URI defined by ENTSO-E and used in the Model Exchange header.  It uniquely identifies the Profile and its version. The last two elements in the URI (http://entsoe.eu/CIM/StateVariables/yy/zzz) indicate major and minor versions where:  - yy - indicates a major version; - zzz - indicates a minor version. Default: '' */
					CIMPP::String modelDescriptionURI; 	/* Model Description URI defined by IEC 61970-552. Default: '' */
					CIMPP::String namespaceRDF; 	/* RDF namespace. Default: '' */
					CIMPP::String namespaceUML; 	/* CIM UML namespace. Default: '' */
					CIMPP::String shortName; 	/* The short name of the profile used in profile documentation. Default: '' */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		StateVariablesVersion();
		virtual ~StateVariablesVersion();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* StateVariablesVersion_factory();
}
#endif
