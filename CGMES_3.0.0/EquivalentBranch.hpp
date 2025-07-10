#ifndef EquivalentBranch_H
#define EquivalentBranch_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EquivalentEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"

namespace CIMPP
{

	/** \brief The class represents equivalent branches. In cases where a transformer phase shift is modelled and the EquivalentBranch is spanning the same nodes, the impedance quantities for the EquivalentBranch shall consider the needed phase shift. */
	class EquivalentBranch : public EquivalentEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EquivalentBranch();
		~EquivalentBranch() override;

		/** \brief Negative sequence series resistance from terminal sequence  1 to terminal sequence 2. Used for short circuit data exchange according to IEC 60909. EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance negativeR12;

		/** \brief Negative sequence series resistance from terminal sequence 2 to terminal sequence 1. Used for short circuit data exchange according to IEC 60909. EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance negativeR21;

		/** \brief Negative sequence series reactance from terminal sequence  1 to terminal sequence 2. Used for short circuit data exchange according to IEC 60909. Usage : EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance negativeX12;

		/** \brief Negative sequence series reactance from terminal sequence 2 to terminal sequence 1. Used for short circuit data exchange according to IEC 60909. Usage: EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance negativeX21;

		/** \brief Positive sequence series resistance from terminal sequence  1 to terminal sequence 2 . Used for short circuit data exchange according to IEC 60909.  EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance positiveR12;

		/** \brief Positive sequence series resistance from terminal sequence 2 to terminal sequence 1. Used for short circuit data exchange according to IEC 60909. EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance positiveR21;

		/** \brief Positive sequence series reactance from terminal sequence  1 to terminal sequence 2. Used for short circuit data exchange according to IEC 60909. Usage : EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance positiveX12;

		/** \brief Positive sequence series reactance from terminal sequence 2 to terminal sequence 1. Used for short circuit data exchange according to IEC 60909. Usage : EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance positiveX21;

		/** \brief Positive sequence series resistance of the reduced branch. Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Resistance from terminal sequence 2 to terminal sequence 1 .Used for steady state power flow. This attribute is optional and represent unbalanced network such as off-nominal phase shifter. If only EquivalentBranch.r is given, then EquivalentBranch.r21 is assumed equal to EquivalentBranch.r. Usage rule : EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance r21;

		/** \brief Positive sequence series reactance of the reduced branch. Default: nullptr */
		CIMPP::Reactance x;

		/** \brief Reactance from terminal sequence 2 to terminal sequence 1. Used for steady state power flow. This attribute is optional and represents an unbalanced network such as off-nominal phase shifter. If only EquivalentBranch.x is given, then EquivalentBranch.x21 is assumed equal to EquivalentBranch.x. Usage rule: EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance x21;

		/** \brief Zero sequence series resistance from terminal sequence  1 to terminal sequence 2. Used for short circuit data exchange according to IEC 60909. EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance zeroR12;

		/** \brief Zero sequence series resistance from terminal sequence  2 to terminal sequence 1. Used for short circuit data exchange according to IEC 60909. Usage : EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance zeroR21;

		/** \brief Zero sequence series reactance from terminal sequence  1 to terminal sequence 2. Used for short circuit data exchange according to IEC 60909. Usage : EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance zeroX12;

		/** \brief Zero sequence series reactance from terminal sequence 2 to terminal sequence 1. Used for short circuit data exchange according to IEC 60909. Usage : EquivalentBranch is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance zeroX21;

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

	BaseClass* EquivalentBranch_factory();
}
#endif
