#ifndef AsynchronousMachineTimeConstantReactance_H
#define AsynchronousMachineTimeConstantReactance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "AsynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Parameter details: <ol> 	<li>If <i>X'' </i>=<i> X'</i>, a single cage (one equivalent rotor winding per axis) is modelled.</li> 	<li>The "<i>p</i>" in the attribute names is a substitution for a "prime" in the usual parameter notation, e.g. <i>tpo</i> refers to <i>T'o</i>.</li> </ol> The parameters used for models expressed in time constant reactance form include: - RotatingMachine.ratedS (<i>MVAbase</i>); - RotatingMachineDynamics.damping (<i>D</i>); - RotatingMachineDynamics.inertia (<i>H</i>); - RotatingMachineDynamics.saturationFactor (<i>S1</i>); - RotatingMachineDynamics.saturationFactor120 (<i>S12</i>); - RotatingMachineDynamics.statorLeakageReactance (<i>Xl</i>); - RotatingMachineDynamics.statorResistance (<i>Rs</i>); - .xs (<i>Xs</i>); - .xp (<i>X'</i>); - .xpp (<i>X''</i>); - .tpo (<i>T'o</i>); - .tppo (<i>T''o</i>). */
	class AsynchronousMachineTimeConstantReactance : public AsynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachineTimeConstantReactance();
		~AsynchronousMachineTimeConstantReactance() override;

		/** \brief Transient rotor time constant (&lt;i&gt;T`o&lt;/i&gt;) (&amp;gt; AsynchronousMachineTimeConstantReactance.tppo).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tpo;

		/** \brief Subtransient rotor time constant (&lt;i&gt;T``o&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds tppo;

		/** \brief Transient reactance (unsaturated) (&lt;i&gt;X`&lt;/i&gt;) (&amp;gt;= AsynchronousMachineTimeConstantReactance.xpp).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU xp;

		/** \brief Subtransient reactance (unsaturated) (&lt;i&gt;X``&lt;/i&gt;) (&amp;gt; RotatingMachineDynamics.statorLeakageReactance).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU xpp;

		/** \brief Synchronous reactance (&lt;i&gt;Xs&lt;/i&gt;) (&amp;gt;= AsynchronousMachineTimeConstantReactance.xp).  Typical value = 1,8. Default: nullptr */
		CIMPP::PU xs;

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

	BaseClass* AsynchronousMachineTimeConstantReactance_factory();
}
#endif
