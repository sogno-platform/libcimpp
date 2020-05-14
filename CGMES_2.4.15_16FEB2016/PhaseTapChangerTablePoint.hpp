#ifndef PhaseTapChangerTablePoint_H
#define PhaseTapChangerTablePoint_H

#include "TapChangerTablePoint.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "AngleDegrees.hpp"

namespace CIMPP {


class PhaseTapChangerTable;
	/*
	Describes each tap step in the phase tap changer tabular curve.
	*/
	class PhaseTapChangerTablePoint: public TapChangerTablePoint
	{

	public:
					CIMPP::AngleDegrees angle; 	/* The angle difference in degrees. Default: nullptr */
					CIMPP::PhaseTapChangerTable* PhaseTapChangerTable; 	/* The table of this point. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PhaseTapChangerTablePoint();
		virtual ~PhaseTapChangerTablePoint();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PhaseTapChangerTablePoint_factory();
}
#endif
