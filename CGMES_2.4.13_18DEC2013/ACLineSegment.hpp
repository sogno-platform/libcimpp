#ifndef ACLineSegment_H
#define ACLineSegment_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Conductor.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Conductance.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Susceptance.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief A wire or combination of wires, with consistent electrical characteristics, building a single electrical system, used to carry alternating current between points in the power system. For symmetrical, transposed 3ph lines, it is sufficient to use  attributes of the line segment, which describe impedances and admittances for the entire length of the segment.  Additionally impedances can be computed by using length and associated per length impedances. The BaseVoltage at the two ends of ACLineSegments in a Line shall have the same BaseVoltage.nominalVoltage. However, boundary lines  may have slightly different BaseVoltage.nominalVoltages and  variation is allowed. Larger voltage difference in general requires use of an equivalent branch. */
	class ACLineSegment : public Conductor
	{
	public:
		/* constructor initialising all attributes to null */
		ACLineSegment();
		~ACLineSegment() override;

		/** \brief Zero sequence shunt (charging) susceptance, uniformly distributed, of the entire line section. Default: nullptr */
		CIMPP::Susceptance b0ch;

		/** \brief Positive sequence shunt (charging) susceptance, uniformly distributed, of the entire line section.  This value represents the full charging over the full length of the line. Default: nullptr */
		CIMPP::Susceptance bch;

		/** \brief Zero sequence shunt (charging) conductance, uniformly distributed, of the entire line section. Default: nullptr */
		CIMPP::Conductance g0ch;

		/** \brief Positive sequence shunt (charging) conductance, uniformly distributed, of the entire line section. Default: nullptr */
		CIMPP::Conductance gch;

		/** \brief Positive sequence series resistance of the entire line section. Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Zero sequence series resistance of the entire line section. Default: nullptr */
		CIMPP::Resistance r0;

		/** \brief Maximum permitted temperature at the end of SC for the calculation of minimum short-circuit currents. Used for short circuit data exchange according to IEC 60909 Default: nullptr */
		CIMPP::Temperature shortCircuitEndTemperature;

		/** \brief Positive sequence series reactance of the entire line section. Default: nullptr */
		CIMPP::Reactance x;

		/** \brief Zero sequence series reactance of the entire line section. Default: nullptr */
		CIMPP::Reactance x0;

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

	BaseClass* ACLineSegment_factory();
}
#endif
