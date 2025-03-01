#ifndef PerLengthDCLineParameter_H
#define PerLengthDCLineParameter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
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

		/** \brief All line segments described by this set of per-length parameters. Default: 0 */
		std::list<CIMPP::DCLineSegment*> DCLineSegments;

		/** \brief Capacitance per unit of length of the DC line segment; significant for cables only. Default: nullptr */
		CIMPP::CapacitancePerLength capacitance;

		/** \brief Inductance per unit of length of the DC line segment. Default: nullptr */
		CIMPP::InductancePerLength inductance;

		/** \brief Resistance per length of the DC line segment. Default: nullptr */
		CIMPP::ResistancePerLength resistance;

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

	BaseClass* PerLengthDCLineParameter_factory();
}
#endif
