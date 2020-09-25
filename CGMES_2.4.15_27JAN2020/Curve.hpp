#ifndef Curve_H
#define Curve_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "CurveStyle.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP {


class CurveData;
	/*
	A multi-purpose curve or functional relationship between an independent variable (X-axis) and dependent (Y-axis) variables.
	*/
	class Curve: public IdentifiedObject
	{

	public:
					CIMPP::CurveStyle curveStyle; 	/* The style or shape of the curve. Default: 0 */
					CIMPP::UnitSymbol xUnit; 	/* The X-axis units of measure. Default: 0 */
					CIMPP::UnitSymbol y1Unit; 	/* The Y1-axis units of measure. Default: 0 */
					CIMPP::UnitSymbol y2Unit; 	/* The Y2-axis units of measure. Default: 0 */
					std::list<CIMPP::CurveData*> CurveDatas; 	/* The curve of  this curve data point. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		Curve();
		virtual ~Curve();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Curve_factory();
}
#endif
