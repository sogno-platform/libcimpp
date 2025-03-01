#ifndef DCLineSegment_H
#define DCLineSegment_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DCConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Capacitance.hpp"
#include "Inductance.hpp"
#include "Length.hpp"
#include "Resistance.hpp"

namespace CIMPP
{
	class PerLengthDCLineParameter;

	/** \brief A wire or combination of wires not insulated from one another, with consistent electrical characteristics, used to carry direct current between points in the DC region of the power system. */
	class DCLineSegment : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCLineSegment();
		~DCLineSegment() override;

		/** \brief Set of per-length parameters for this line segment. Default: 0 */
		CIMPP::PerLengthDCLineParameter* PerLengthParameter;

		/** \brief Capacitance of the DC line segment. Significant for cables only. Default: nullptr */
		CIMPP::Capacitance capacitance;

		/** \brief Inductance of the DC line segment. Neglectable compared with DCSeriesDevice used for smoothing. Default: nullptr */
		CIMPP::Inductance inductance;

		/** \brief Segment length for calculating line section capabilities. Default: nullptr */
		CIMPP::Length length;

		/** \brief Resistance of the DC line segment. Default: nullptr */
		CIMPP::Resistance resistance;

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

	BaseClass* DCLineSegment_factory();
}
#endif
