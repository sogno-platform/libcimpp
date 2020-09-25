#ifndef WindDynamicsLookupTable_H
#define WindDynamicsLookupTable_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "WindLookupTableFunctionKind.hpp"
#include "Integer.hpp"

namespace CIMPP {


class WindContCurrLimIEC;
class WindContPType3IEC;
class WindContRotorRIEC;
class WindPlantFreqPcontrolIEC;
	/*
	The class models a look up table for the purpose of wind standard models.
	*/
	class WindDynamicsLookupTable: public IdentifiedObject
	{

	public:
					CIMPP::WindContCurrLimIEC* WindContCurrLimIEC; 	/* The wind dynamics lookup table associated with this current control limitation model. Default: 0 */
					CIMPP::WindContPType3IEC* WindContPType3IEC; 	/* The wind dynamics lookup table associated with this P control type 3 model. Default: 0 */
					CIMPP::WindContRotorRIEC* WindContRotorRIEC; 	/* The rotor resistance control model with which this wind dynamics lookup table is associated. Default: 0 */
					CIMPP::Simple_Float input; 	/* Input value (x) for the lookup table function. Default: nullptr */
					CIMPP::WindLookupTableFunctionKind lookupTableFunctionType; 	/* Type of the lookup table function. Default: 0 */
					CIMPP::Simple_Float output; 	/* Output value (y) for the lookup table function. Default: nullptr */
					CIMPP::Integer sequence; 	/* Sequence numbers of the pairs of the input (x) and the output (y) of the lookup table function. Default: 0 */
					CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC; 	/* The wind dynamics lookup table associated with this frequency and active power wind plant model. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindDynamicsLookupTable();
		virtual ~WindDynamicsLookupTable();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindDynamicsLookupTable_factory();
}
#endif
