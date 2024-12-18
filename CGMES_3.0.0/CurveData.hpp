#ifndef CurveData_H
#define CurveData_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"

namespace CIMPP
{
	class Curve;

	/*
	Multi-purpose data points for defining a curve.  The use of this generic class is discouraged if a more specific class can be used to specify the X and Y axis values along with their specific data types.
	*/
	class CurveData : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		CurveData();
		~CurveData() override;

		CIMPP::Curve* Curve;  /* The curve of  this curve data point. Default: 0 */
		CIMPP::Float xvalue;  /* The data value of the X-axis variable,  depending on the X-axis units. Default: 0.0 */
		CIMPP::Float y1value;  /* The data value of the  first Y-axis variable, depending on the Y-axis units. Default: 0.0 */
		CIMPP::Float y2value;  /* The data value of the second Y-axis variable (if present), depending on the Y-axis units. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CurveData_factory();
}
#endif
