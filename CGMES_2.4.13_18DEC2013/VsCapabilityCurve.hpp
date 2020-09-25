#ifndef VsCapabilityCurve_H
#define VsCapabilityCurve_H

#include "Curve.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class VsConverter;
	/*
	The P-Q capability curve for a voltage source converter, with P on x-axis and Qmin and Qmax on y1-axis and y2-axis.
	*/
	class VsCapabilityCurve: public Curve
	{

	public:
					std::list<CIMPP::VsConverter*> VsConverterDCSides; 	/* Capability curve of this converter. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		VsCapabilityCurve();
		virtual ~VsCapabilityCurve();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VsCapabilityCurve_factory();
}
#endif
