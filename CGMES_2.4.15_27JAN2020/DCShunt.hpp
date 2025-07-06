#ifndef DCShunt_H
#define DCShunt_H
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
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{

	/** \brief A shunt device within the DC system, typically used for filtering.  Needed for transient and short circuit studies. */
	class DCShunt : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCShunt();
		~DCShunt() override;

		/** \brief Capacitance of the DC shunt. Default: nullptr */
		CIMPP::Capacitance capacitance;

		/** \brief Rated DC device voltage. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::Voltage ratedUdc;

		/** \brief Resistance of the DC device. Default: nullptr */
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

	BaseClass* DCShunt_factory();
}
#endif
