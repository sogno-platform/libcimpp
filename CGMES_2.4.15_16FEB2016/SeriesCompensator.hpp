#ifndef SeriesCompensator_H
#define SeriesCompensator_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{

	/** \brief A Series Compensator is a series capacitor or reactor or an AC transmission line without charging susceptance.  It is a two terminal device. */
	class SeriesCompensator : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		SeriesCompensator();
		~SeriesCompensator() override;

		/** \brief Positive sequence resistance. Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Zero sequence resistance. Default: nullptr */
		CIMPP::Resistance r0;

		/** \brief Describe if a metal oxide varistor (mov) for over voltage protection is configured at the series compensator. Default: false */
		CIMPP::Boolean varistorPresent;

		/** \brief The maximum current the varistor is designed to handle at specified duration. Default: nullptr */
		CIMPP::CurrentFlow varistorRatedCurrent;

		/** \brief The dc voltage at which the varistor start conducting. Default: nullptr */
		CIMPP::Voltage varistorVoltageThreshold;

		/** \brief Positive sequence reactance. Default: nullptr */
		CIMPP::Reactance x;

		/** \brief Zero sequence reactance. Default: nullptr */
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

	BaseClass* SeriesCompensator_factory();
}
#endif
