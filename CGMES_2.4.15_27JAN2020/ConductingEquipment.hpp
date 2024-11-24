#ifndef ConductingEquipment_H
#define ConductingEquipment_H

#include "Equipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class BaseVoltage;
class SvStatus;
class Terminal;
	/*
	The parts of the AC power system that are designed to carry current or that are conductively connected through terminals.
	*/
	class ConductingEquipment: public Equipment
	{

	public:
					CIMPP::BaseVoltage* BaseVoltage; 	/* All conducting equipment with this base voltage.  Use only when there is no voltage level container used and only one base voltage applies.  For example, not used for transformers. Default: 0 */
					CIMPP::SvStatus* SvStatus; 	/* The status state variable associated with this conducting equipment. Default: 0 */
					std::list<CIMPP::Terminal*> Terminals; 	/* Conducting equipment have terminals that may be connected to other conducting equipment terminals via connectivity nodes or topological nodes. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ConductingEquipment();
		virtual ~ConductingEquipment();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ConductingEquipment_factory();
}
#endif
