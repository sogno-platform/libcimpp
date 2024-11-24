#ifndef SynchronousMachineDetailed_H
#define SynchronousMachineDetailed_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "IfdBaseKind.hpp"

namespace CIMPP
{

	/*
	All synchronous machine detailed types use a subset of the same data parameters and input/output variables.   The several variations differ in the following ways: - the number of  equivalent windings that are included; - the way in which saturation is incorporated into the model; - whether or not "subtransient saliency" (<i>X''q</i> not = <i>X''d</i>) is represented. It is not necessary for each simulation tool to have separate models for each of the model types.  The same model can often be used for several types by alternative logic within the model.  Also, differences in saturation representation might not result in significant model performance differences so model substitutions are often acceptable.
	*/
	class SynchronousMachineDetailed : public SynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineDetailed();
		~SynchronousMachineDetailed() override;

		CIMPP::Float efdBaseRatio;  /* Ratio (exciter voltage/generator voltage) of &lt;i&gt;Efd&lt;/i&gt; bases of exciter and generator models (&amp;gt; 0). Typical value = 1. Default: 0.0 */
		CIMPP::IfdBaseKind ifdBaseType;  /* Excitation base system mode. It should be equal to the value of &lt;i&gt;WLMDV&lt;/i&gt; given by the user. &lt;i&gt;WLMDV&lt;/i&gt; is the PU ratio between the field voltage and the excitation current: &lt;i&gt;Efd&lt;/i&gt; = &lt;i&gt;WLMDV&lt;/i&gt; x &lt;i&gt;Ifd&lt;/i&gt;. Typical value = ifag. Default: 0 */
		CIMPP::Float saturationFactor120QAxis;  /* Quadrature-axis saturation factor at 120% of rated terminal voltage (&lt;i&gt;S12q&lt;/i&gt;) (&amp;gt;= SynchonousMachineDetailed.saturationFactorQAxis).  Typical value = 0,12. Default: 0.0 */
		CIMPP::Float saturationFactorQAxis;  /* Quadrature-axis saturation factor at rated terminal voltage (&lt;i&gt;S1q&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,02. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SynchronousMachineDetailed_factory();
}
#endif
