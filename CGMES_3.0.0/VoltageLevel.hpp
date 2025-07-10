#ifndef VoltageLevel_H
#define VoltageLevel_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class BaseVoltage;
	class Bay;
	class Substation;

	/** \brief A collection of equipment at one common system voltage forming a switchgear. The equipment typically consists of breakers, busbars, instrumentation, control, regulation and protection devices as well as assemblies of all these. */
	class VoltageLevel : public EquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		VoltageLevel();
		~VoltageLevel() override;

		/** \brief The base voltage used for all equipment within the voltage level. Default: 0 */
		CIMPP::BaseVoltage* BaseVoltage;

		/** \brief The bays within this voltage level. Default: 0 */
		std::list<CIMPP::Bay*> Bays;

		/** \brief The substation of the voltage level. Default: 0 */
		CIMPP::Substation* Substation;

		/** \brief The bus bar`s high voltage limit. The limit applies to all equipment and nodes contained in a given VoltageLevel. It is not required that it is exchanged in pair with lowVoltageLimit. It is preferable to use operational VoltageLimit, which prevails, if present. Default: nullptr */
		CIMPP::Voltage highVoltageLimit;

		/** \brief The bus bar`s low voltage limit. The limit applies to all equipment and nodes contained in a given VoltageLevel. It is not required that it is exchanged in pair with highVoltageLimit. It is preferable to use operational VoltageLimit, which prevails, if present. Default: nullptr */
		CIMPP::Voltage lowVoltageLimit;

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

	BaseClass* VoltageLevel_factory();
}
#endif
