#ifndef RatioTapChangerTablePoint_H
#define RatioTapChangerTablePoint_H

#include "TapChangerTablePoint.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RatioTapChangerTable;
	/*
	Describes each tap step in the ratio tap changer tabular curve.
	*/
	class RatioTapChangerTablePoint: public TapChangerTablePoint
	{

	public:
					CIMPP::RatioTapChangerTable* RatioTapChangerTable; 	/* Points of this table. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		RatioTapChangerTablePoint();
		virtual ~RatioTapChangerTablePoint();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RatioTapChangerTablePoint_factory();
}
#endif
