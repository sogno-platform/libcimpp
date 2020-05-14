#ifndef DCLineSegment_H
#define DCLineSegment_H

#include "DCConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Capacitance.hpp"
#include "Inductance.hpp"
#include "Resistance.hpp"
#include "Length.hpp"

namespace CIMPP {


class PerLengthDCLineParameter;
	/*
	A wire or combination of wires not insulated from one another, with consistent electrical characteristics, used to carry direct current between points in the DC region of the power system.
	*/
	class DCLineSegment: public DCConductingEquipment
	{

	public:
					CIMPP::Capacitance capacitance; 	/* Capacitance of the DC line segment. Significant for cables only. Default: nullptr */
					CIMPP::Inductance inductance; 	/* Inductance of the DC line segment. Neglectable compared with DCSeriesDevice used for smoothing. Default: nullptr */
					CIMPP::Resistance resistance; 	/* Resistance of the DC line segment. Default: nullptr */
					CIMPP::Length length; 	/* Segment length for calculating line section capabilities. Default: nullptr */
					CIMPP::PerLengthDCLineParameter* PerLengthParameter; 	/* Set of per-length parameters for this line segment. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCLineSegment();
		virtual ~DCLineSegment();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCLineSegment_factory();
}
#endif
