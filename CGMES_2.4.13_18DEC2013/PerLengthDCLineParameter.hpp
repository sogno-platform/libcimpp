#ifndef PerLengthDCLineParameter_H
#define PerLengthDCLineParameter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CapacitancePerLength.hpp"
#include "InductancePerLength.hpp"
#include "ResistancePerLength.hpp"

namespace CIMPP
{
	class DCLineSegment;

	class PerLengthDCLineParameter : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		PerLengthDCLineParameter();
		~PerLengthDCLineParameter() override;

		std::list<CIMPP::DCLineSegment*> DCLineSegments;  /* All line segments described by this set of per-length parameters. Default: 0 */
		CIMPP::CapacitancePerLength capacitance;  /* Capacitance per unit of length of the DC line segment; significant for cables only. Default: nullptr */
		CIMPP::InductancePerLength inductance;  /* Inductance per unit of length of the DC line segment. Default: nullptr */
		CIMPP::ResistancePerLength resistance;  /* Resistance per length of the DC line segment. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PerLengthDCLineParameter_factory();
}
#endif
