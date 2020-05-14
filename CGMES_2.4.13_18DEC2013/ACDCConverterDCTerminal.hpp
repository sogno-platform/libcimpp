#ifndef ACDCConverterDCTerminal_H
#define ACDCConverterDCTerminal_H

#include "DCBaseTerminal.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "DCPolarityKind.hpp"

namespace CIMPP {


class ACDCConverter;
	/*
	
	*/
	class ACDCConverterDCTerminal: public DCBaseTerminal
	{

	public:
					CIMPP::ACDCConverter* DCConductingEquipment; 	/*  Default: 0 */
					CIMPP::DCPolarityKind polarity; 	/* Represents the normal network polarity condition. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ACDCConverterDCTerminal();
		virtual ~ACDCConverterDCTerminal();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ACDCConverterDCTerminal_factory();
}
#endif
