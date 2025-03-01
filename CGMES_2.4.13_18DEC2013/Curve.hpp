#ifndef Curve_H
#define Curve_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CurveStyle.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP
{
	class CurveData;

	/** \brief A multi-purpose curve or functional relationship between an independent variable (X-axis) and dependent (Y-axis) variables. */
	class Curve : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Curve();
		~Curve() override;

		/** \brief The curve of  this curve data point. Default: 0 */
		std::list<CIMPP::CurveData*> CurveDatas;

		/** \brief The style or shape of the curve. Default: 0 */
		CIMPP::CurveStyle curveStyle;

		/** \brief The X-axis units of measure. Default: 0 */
		CIMPP::UnitSymbol xUnit;

		/** \brief The Y1-axis units of measure. Default: 0 */
		CIMPP::UnitSymbol y1Unit;

		/** \brief The Y2-axis units of measure. Default: 0 */
		CIMPP::UnitSymbol y2Unit;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* Curve_factory();
}
#endif
