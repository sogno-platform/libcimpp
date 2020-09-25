#ifndef PerLengthDCLineParameter_H
#define PerLengthDCLineParameter_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCLineSegment;
class CapacitancePerLength;
class InductancePerLength;
class ResistancePerLength;
	/*
	
	*/
	class PerLengthDCLineParameter: public BaseClass
	{

	public:
					std::list<CIMPP::DCLineSegment*> DCLineSegments; 	/* All line segments described by this set of per-length parameters. Default: 0 */
					CIMPP::CapacitancePerLength* capacitance; 	/* Capacitance per unit of length of the DC line segment; significant for cables only. Default: nullptr */
					CIMPP::InductancePerLength* inductance; 	/* Inductance per unit of length of the DC line segment. Default: nullptr */
					CIMPP::ResistancePerLength* resistance; 	/* Resistance per length of the DC line segment. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PerLengthDCLineParameter();
		virtual ~PerLengthDCLineParameter();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PerLengthDCLineParameter_factory();
}
#endif
