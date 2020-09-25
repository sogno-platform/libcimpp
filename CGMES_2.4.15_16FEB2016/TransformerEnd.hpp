#ifndef TransformerEnd_H
#define TransformerEnd_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"
#include "Resistance.hpp"
#include "Boolean.hpp"
#include "Reactance.hpp"

namespace CIMPP {


class BaseVoltage;
class Terminal;
class PhaseTapChanger;
class RatioTapChanger;
	/*
	A conducting connection point of a power transformer. It corresponds to a physical transformer winding terminal.  In earlier CIM versions, the TransformerWinding class served a similar purpose, but this class is more flexible because it associates to terminal but is not a specialization of ConductingEquipment.
	*/
	class TransformerEnd: public IdentifiedObject
	{

	public:
					CIMPP::Integer endNumber; 	/* Number for this transformer end, corresponding to the end`s order in the power transformer vector group or phase angle clock number.  Highest voltage winding should be 1.  Each end within a power transformer should have a unique subsequent end number.   Note the transformer end number need not match the terminal sequence number. Default: 0 */
					CIMPP::BaseVoltage* BaseVoltage; 	/* Base voltage of the transformer end.  This is essential for PU calculation. Default: 0 */
					CIMPP::Terminal* Terminal; 	/* Terminal of the power transformer to which this transformer end belongs. Default: 0 */
					CIMPP::PhaseTapChanger* PhaseTapChanger; 	/* Transformer end to which this phase tap changer belongs. Default: 0 */
					CIMPP::RatioTapChanger* RatioTapChanger; 	/* Transformer end to which this ratio tap changer belongs. Default: 0 */
					CIMPP::Resistance rground; 	/* (for Yn and Zn connections) Resistance part of neutral impedance where `grounded` is true. Default: nullptr */
					CIMPP::Boolean grounded; 	/* (for Yn and Zn connections) True if the neutral is solidly grounded. Default: false */
					CIMPP::Reactance xground; 	/* (for Yn and Zn connections) Reactive part of neutral impedance where `grounded` is true. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		TransformerEnd();
		virtual ~TransformerEnd();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TransformerEnd_factory();
}
#endif
