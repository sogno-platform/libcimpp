#ifndef SynchronousMachineTimeConstantReactance_H
#define SynchronousMachineTimeConstantReactance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDetailed.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "RotorKind.hpp"
#include "Seconds.hpp"
#include "SynchronousMachineModelKind.hpp"

namespace CIMPP
{

	/** \brief Synchronous machine detailed modelling types are defined by the combination of the attributes SynchronousMachineTimeConstantReactance.modelType and SynchronousMachineTimeConstantReactance.rotorType.   Parameter details: <ol> 	<li>The "p" in the time-related attribute names is a substitution for a "prime" in the usual parameter notation, e.g. tpdo refers to <i>T'do</i>.</li> 	<li>The parameters used for models expressed in time constant reactance form include:</li> </ol> - RotatingMachine.ratedS (<i>MVAbase</i>); - RotatingMachineDynamics.damping (<i>D</i>); - RotatingMachineDynamics.inertia (<i>H</i>); - RotatingMachineDynamics.saturationFactor (<i>S1</i>); - RotatingMachineDynamics.saturationFactor120 (<i>S12</i>); - RotatingMachineDynamics.statorLeakageReactance (<i>Xl</i>); - RotatingMachineDynamics.statorResistance (<i>Rs</i>); - SynchronousMachineTimeConstantReactance.ks (<i>Ks</i>); - SynchronousMachineDetailed.saturationFactorQAxis (<i>S1q</i>); - SynchronousMachineDetailed.saturationFactor120QAxis (<i>S12q</i>); - SynchronousMachineDetailed.efdBaseRatio; - SynchronousMachineDetailed.ifdBaseType; - .xDirectSync (<i>Xd</i>); - .xDirectTrans (<i>X'd</i>); - .xDirectSubtrans (<i>X''d</i>); - .xQuadSync (<i>Xq</i>); - .xQuadTrans (<i>X'q</i>); - .xQuadSubtrans (<i>X''q</i>); - .tpdo (<i>T'do</i>); - .tppdo (<i>T''do</i>); - .tpqo (<i>T'qo</i>); - .tppqo (<i>T''qo</i>); - .tc. */
	class SynchronousMachineTimeConstantReactance : public SynchronousMachineDetailed
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineTimeConstantReactance();
		~SynchronousMachineTimeConstantReactance() override;

		/** \brief Saturation loading correction factor (&lt;i&gt;Ks&lt;/i&gt;) (&amp;gt;= 0).  Used only by type J model.  Typical value = 0. Default: 0.0 */
		CIMPP::Float ks;

		/** \brief Type of synchronous machine model used in dynamic simulation applications. Default: 0 */
		CIMPP::SynchronousMachineModelKind modelType;

		/** \brief Type of rotor on physical machine. Default: 0 */
		CIMPP::RotorKind rotorType;

		/** \brief Damping time constant for `Canay` reactance (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Direct-axis transient rotor time constant (&lt;i&gt;T`do&lt;/i&gt;) (&amp;gt; SynchronousMachineTimeConstantReactance.tppdo).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tpdo;

		/** \brief Direct-axis subtransient rotor time constant (&lt;i&gt;T``do&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds tppdo;

		/** \brief Quadrature-axis subtransient rotor time constant (&lt;i&gt;T``qo&lt;/i&gt;) (&amp;gt; 0). Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds tppqo;

		/** \brief Quadrature-axis transient rotor time constant (&lt;i&gt;T`qo&lt;/i&gt;) (&amp;gt; SynchronousMachineTimeConstantReactance.tppqo). Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tpqo;

		/** \brief Direct-axis subtransient reactance (unsaturated) (&lt;i&gt;X``d&lt;/i&gt;) (&amp;gt; RotatingMachineDynamics.statorLeakageReactance).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU xDirectSubtrans;

		/** \brief Direct-axis synchronous reactance (&lt;i&gt;Xd&lt;/i&gt;) (&amp;gt;= SynchronousMachineTimeConstantReactance.xDirectTrans). The quotient of a sustained value of that AC component of armature voltage that is produced by the total direct-axis flux due to direct-axis armature current and the value of the AC component of this current, the machine running at rated speed.  Typical value = 1,8. Default: nullptr */
		CIMPP::PU xDirectSync;

		/** \brief Direct-axis transient reactance (unsaturated) (&lt;i&gt;X`d&lt;/i&gt;) (&amp;gt;= SynchronousMachineTimeConstantReactance.xDirectSubtrans).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU xDirectTrans;

		/** \brief Quadrature-axis subtransient reactance (&lt;i&gt;X``q&lt;/i&gt;) (&amp;gt; RotatingMachineDynamics.statorLeakageReactance).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU xQuadSubtrans;

		/** \brief Quadrature-axis synchronous reactance (&lt;i&gt;Xq&lt;/i&gt;) (&amp;gt;= SynchronousMachineTimeConstantReactance.xQuadTrans). The ratio of the component of reactive armature voltage, due to the quadrature-axis component of armature current, to this component of current, under steady state conditions and at rated frequency.  Typical value = 1,6. Default: nullptr */
		CIMPP::PU xQuadSync;

		/** \brief Quadrature-axis transient reactance (&lt;i&gt;X`q&lt;/i&gt;) (&amp;gt;= SynchronousMachineTimeConstantReactance.xQuadSubtrans).  Typical value = 0,3. Default: nullptr */
		CIMPP::PU xQuadTrans;

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

	BaseClass* SynchronousMachineTimeConstantReactance_factory();
}
#endif
