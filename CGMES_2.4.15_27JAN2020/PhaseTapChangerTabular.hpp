#ifndef PhaseTapChangerTabular_H
#define PhaseTapChangerTabular_H

#include "PhaseTapChanger.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class PhaseTapChangerTable;
	/*
	
	*/
	class PhaseTapChangerTabular: public PhaseTapChanger
	{

	public:
					CIMPP::PhaseTapChangerTable* PhaseTapChangerTable; 	/* The phase tap changer table for this phase tap changer. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PhaseTapChangerTabular();
		virtual ~PhaseTapChangerTabular();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PhaseTapChangerTabular_factory();
}
#endif
