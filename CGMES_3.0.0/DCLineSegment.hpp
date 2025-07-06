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
#include "CimClassDetails.hpp"
#include "Capacitance.hpp"
#include "Inductance.hpp"
#include "Length.hpp"
#include "Resistance.hpp"

namespace CIMPP
{

	/** \brief A wire or combination of wires not insulated from one another, with consistent electrical characteristics, used to carry direct current between points in the DC region of the power system. */
	class DCLineSegment : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCLineSegment();
		~DCLineSegment() override;

		/** \brief Capacitance of the DC line segment. Significant for cables only. Default: nullptr */
		CIMPP::Capacitance capacitance;

		/** \brief Inductance of the DC line segment. Negligible compared with DCSeriesDevice used for smoothing. Default: nullptr */
		CIMPP::Inductance inductance;

		/** \brief Segment length for calculating line section capabilities. Default: nullptr */
		CIMPP::Length length;

		/** \brief Resistance of the DC line segment. Default: nullptr */
		CIMPP::Resistance resistance;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* DCLineSegment_factory();
}
#endif
