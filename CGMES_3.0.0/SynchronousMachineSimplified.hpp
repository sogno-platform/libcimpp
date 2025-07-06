#ifndef SynchronousMachineSimplified_H
#define SynchronousMachineSimplified_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{

	/** \brief The simplified model represents a synchronous generator as a constant internal voltage behind an impedance<i> </i>(<i>Rs + jXp</i>) as shown in the Simplified diagram. Since internal voltage is held constant, there is no <i>Efd</i> input and any excitation system model will be ignored.  There is also no <i>Ifd</i> output. This model should not be used for representing a real generator except, perhaps, small generators whose response is insignificant.   The parameters used for the simplified model include: - RotatingMachineDynamics.damping (<i>D</i>); - RotatingMachineDynamics.inertia (<i>H</i>); - RotatingMachineDynamics.statorLeakageReactance (used to exchange <i>jXp </i>for SynchronousMachineSimplified); - RotatingMachineDynamics.statorResistance (<i>Rs</i>). */
	class SynchronousMachineSimplified : public SynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineSimplified();
		~SynchronousMachineSimplified() override;

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

	BaseClass* SynchronousMachineSimplified_factory();
}
#endif
