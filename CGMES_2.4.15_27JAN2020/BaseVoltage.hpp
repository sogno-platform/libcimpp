#ifndef BaseVoltage_H
#define BaseVoltage_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Voltage.hpp"

namespace CIMPP {


class ConductingEquipment;
class TopologicalNode;
class TransformerEnd;
class VoltageLevel;
	/*
	Defines a system base voltage which is referenced.
	*/
	class BaseVoltage: public IdentifiedObject
	{

	public:
					std::list<CIMPP::ConductingEquipment*> ConductingEquipment; 	/* Base voltage of this conducting equipment.  Use only when there is no voltage level container used and only one base voltage applies.  For example, not used for transformers. Default: 0 */
					std::list<CIMPP::TopologicalNode*> TopologicalNode; 	/* The topological nodes at the base voltage. Default: 0 */
					std::list<CIMPP::TransformerEnd*> TransformerEnds; 	/* Transformer ends at the base voltage.  This is essential for PU calculation. Default: 0 */
					std::list<CIMPP::VoltageLevel*> VoltageLevel; 	/* The voltage levels having this base voltage. Default: 0 */
					CIMPP::Voltage nominalVoltage; 	/* The power system resource`s base voltage. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		BaseVoltage();
		virtual ~BaseVoltage();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* BaseVoltage_factory();
}
#endif
