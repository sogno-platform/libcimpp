#ifndef SynchronousMachineEquivalentCircuit_H
#define SynchronousMachineEquivalentCircuit_H
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
#include "PU.hpp"

namespace CIMPP
{

	/** \brief The electrical equations for all variations of the synchronous models are based on the SynchronousEquivalentCircuit diagram for the direct- and quadrature- axes. Equations for conversion between equivalent circuit and time constant reactance forms: <i>Xd</i> = <i>Xad </i>+<i> Xl</i> <i>X'd</i> = <i>Xl</i> + <i>Xad</i> x <i>Xfd</i> / (<i>Xad</i> + <i>Xfd</i>) <i>X"d</i> = <i>Xl</i> + <i>Xad</i> x <i>Xfd</i> x <i>X1d</i> / (<i>Xad</i> x <i>Xfd</i> + <i>Xad</i> x <i>X1d</i> + <i>Xfd</i> x <i>X1d</i>) <i>Xq</i> = <i>Xaq</i> + <i>Xl</i> <i>X'q</i> = <i>Xl</i> + <i>Xaq</i> x <i>X1q</i> / (<i>Xaq</i> + <i>X1q</i>) <i>X"q</i> = <i>Xl</i> + <i>Xaq</i> x <i>X1q</i> x <i>X2q</i> / (<i>Xaq</i> x <i>X1q</i> + <i>Xaq</i> x <i>X2q</i> + <i>X1q</i> x <i>X2q</i>) <i>T'do</i> = (<i>Xad</i> + <i>Xfd</i>) / (<i>omega</i><i><sub>0</sub></i> x <i>Rfd</i>) <i>T"do</i> = (<i>Xad</i> x <i>Xfd</i> + <i>Xad</i> x <i>X1d</i> + <i>Xfd</i> x <i>X1d</i>) / (<i>omega</i><i><sub>0</sub></i> x <i>R1d</i> x (<i>Xad</i> + <i>Xfd</i>) <i>T'qo</i> = (<i>Xaq</i> + <i>X1q</i>) / (<i>omega</i><i><sub>0</sub></i> x <i>R1q</i>) <i>T"qo</i> = (<i>Xaq</i> x <i>X1q</i> + <i>Xaq</i> x <i>X2q</i> + <i>X1q</i> x <i>X2q</i>) / (<i>omega</i><i><sub>0</sub></i> x <i>R2q</i> x (<i>Xaq</i> + <i>X1q</i>) Same equations using CIM attributes from SynchronousMachineTimeConstantReactance class on left of "=" and SynchronousMachineEquivalentCircuit class on right (except as noted): xDirectSync = xad + RotatingMachineDynamics.statorLeakageReactance xDirectTrans = RotatingMachineDynamics.statorLeakageReactance + xad x xfd / (xad + xfd) xDirectSubtrans = RotatingMachineDynamics.statorLeakageReactance + xad x xfd x x1d / (xad x xfd + xad x x1d + xfd x x1d) xQuadSync = xaq + RotatingMachineDynamics.statorLeakageReactance xQuadTrans = RotatingMachineDynamics.statorLeakageReactance + xaq x x1q / (xaq+ x1q) xQuadSubtrans = RotatingMachineDynamics.statorLeakageReactance + xaq x x1q x x2q / (xaq x x1q + xaq x x2q + x1q x x2q)  tpdo = (xad + xfd) / (2 x pi x nominal frequency x rfd) tppdo = (xad x xfd + xad x x1d + xfd x x1d) / (2 x pi x nominal frequency x r1d x (xad + xfd) tpqo = (xaq + x1q) / (2 x pi x nominal frequency x r1q) tppqo = (xaq x x1q + xaq x x2q + x1q x x2q) / (2 x pi x nominal frequency x r2q x (xaq + x1q) These are only valid for a simplified model where "Canay" reactance is zero. */
	class SynchronousMachineEquivalentCircuit : public SynchronousMachineDetailed
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineEquivalentCircuit();
		~SynchronousMachineEquivalentCircuit() override;

		/** \brief Direct-axis damper 1 winding resistance. Default: nullptr */
		CIMPP::PU r1d;

		/** \brief Quadrature-axis damper 1 winding resistance. Default: nullptr */
		CIMPP::PU r1q;

		/** \brief Quadrature-axis damper 2 winding resistance. Default: nullptr */
		CIMPP::PU r2q;

		/** \brief Field winding resistance. Default: nullptr */
		CIMPP::PU rfd;

		/** \brief Direct-axis damper 1 winding leakage reactance. Default: nullptr */
		CIMPP::PU x1d;

		/** \brief Quadrature-axis damper 1 winding leakage reactance. Default: nullptr */
		CIMPP::PU x1q;

		/** \brief Quadrature-axis damper 2 winding leakage reactance. Default: nullptr */
		CIMPP::PU x2q;

		/** \brief Direct-axis mutual reactance. Default: nullptr */
		CIMPP::PU xad;

		/** \brief Quadrature-axis mutual reactance. Default: nullptr */
		CIMPP::PU xaq;

		/** \brief Differential mutual (`Canay`) reactance. Default: nullptr */
		CIMPP::PU xf1d;

		/** \brief Field winding leakage reactance. Default: nullptr */
		CIMPP::PU xfd;

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

	BaseClass* SynchronousMachineEquivalentCircuit_factory();
}
#endif
