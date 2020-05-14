#ifndef PhaseTapChangerTable_H
#define PhaseTapChangerTable_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class PhaseTapChangerTablePoint;
class PhaseTapChangerTabular;
	/*
	Describes a tabular curve for how the phase angle difference and impedance varies with the tap step.
	*/
	class PhaseTapChangerTable: public IdentifiedObject
	{

	public:
					std::list<CIMPP::PhaseTapChangerTablePoint*> PhaseTapChangerTablePoint; 	/* The points of this table. Default: 0 */
					std::list<CIMPP::PhaseTapChangerTabular*> PhaseTapChangerTabular; 	/* The phase tap changers to which this phase tap table applies. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PhaseTapChangerTable();
		virtual ~PhaseTapChangerTable();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PhaseTapChangerTable_factory();
}
#endif
