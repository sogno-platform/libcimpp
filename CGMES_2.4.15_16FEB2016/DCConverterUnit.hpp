#ifndef DCConverterUnit_H
#define DCConverterUnit_H

#include "DCEquipmentContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "DCConverterOperatingModeKind.hpp"

namespace CIMPP {


class Substation;
	/*
	Indivisible operative unit comprising all equipment between the point of common coupling on the AC side and the point of common coupling - DC side, essentially one or more converters, together with one or more converter transformers, converter control equipment, essential protective and switching devices and auxiliaries, if any, used for conversion.
	*/
	class DCConverterUnit: public DCEquipmentContainer
	{

	public:
					CIMPP::Substation* Substation; 	/*  Default: 0 */
					CIMPP::DCConverterOperatingModeKind operationMode; 	/*  Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DCConverterUnit();
		virtual ~DCConverterUnit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCConverterUnit_factory();
}
#endif
