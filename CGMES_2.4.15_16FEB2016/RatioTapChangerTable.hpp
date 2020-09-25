#ifndef RatioTapChangerTable_H
#define RatioTapChangerTable_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RatioTapChanger;
class RatioTapChangerTablePoint;
	/*
	Describes a curve for how the voltage magnitude and impedance varies with the tap step.
	*/
	class RatioTapChangerTable: public IdentifiedObject
	{

	public:
					std::list<CIMPP::RatioTapChanger*> RatioTapChanger; 	/* The tap ratio table for this ratio  tap changer. Default: 0 */
					std::list<CIMPP::RatioTapChangerTablePoint*> RatioTapChangerTablePoint; 	/* Table of this point. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		RatioTapChangerTable();
		virtual ~RatioTapChangerTable();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RatioTapChangerTable_factory();
}
#endif
