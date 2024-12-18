#ifndef TapChangerControl_H
#define TapChangerControl_H

#include "RegulatingControl.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class TapChanger;
	/*
	Describes behavior specific to tap changers, e.g. how the voltage at the end of a line varies with the load level and compensation of the voltage drop by tap adjustment.
	*/
	class TapChangerControl: public RegulatingControl
	{

	public:
					std::list<CIMPP::TapChanger*> TapChanger; 	/* The regulating control scheme in which this tap changer participates. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		TapChangerControl();
		virtual ~TapChangerControl();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TapChangerControl_factory();
}
#endif
