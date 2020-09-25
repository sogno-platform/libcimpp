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
	A DC electrical connection point at the AC/DC converter. The AC/DC converter is electrically connected also to the AC side. The AC connection is inherited from the AC conducting equipment in the same way as any other AC equipment. The AC/DC converter DC terminal is separate from generic DC terminal to restrict the connection with the AC side to AC/DC converter and so that no other DC conducting equipment can be connected to the AC side.
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
