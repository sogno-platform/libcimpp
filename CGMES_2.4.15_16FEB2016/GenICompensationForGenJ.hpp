#ifndef GenICompensationForGenJ_H
#define GenICompensationForGenJ_H
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
#include "CimClassDetails.hpp"
#include "PU.hpp"

namespace CIMPP
{
	class SynchronousMachineDynamics;
	class VCompIEEEType2;

	/** \brief This class provides the resistive and reactive components of compensation for the generator associated with the IEEE Type 2 voltage compensator for current flow out of one of the other generators in the interconnection. */
	class GenICompensationForGenJ : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		GenICompensationForGenJ();
		~GenICompensationForGenJ() override;

		/** \brief Standard synchronous machine out of which current flow is being compensated for. Default: 0 */
		CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics;

		/** \brief The standard IEEE Type 2 voltage compensator of this compensation. Default: 0 */
		CIMPP::VCompIEEEType2* VcompIEEEType2;

		/** \brief  Default: nullptr */
		CIMPP::PU rcij;

		/** \brief  Default: nullptr */
		CIMPP::PU xcij;

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

	BaseClass* GenICompensationForGenJ_factory();
}
#endif
