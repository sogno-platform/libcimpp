#ifndef GenICompensationForGenJ_H
#define GenICompensationForGenJ_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"

namespace CIMPP
{
	class SynchronousMachineDynamics;
	class VCompIEEEType2;

	/*
	Resistive and reactive components of compensation for generator associated with IEEE type 2 voltage compensator for current flow out of another generator in the interconnection.
	*/
	class GenICompensationForGenJ : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		GenICompensationForGenJ();
		~GenICompensationForGenJ() override;

		CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics;  /* Standard synchronous machine out of which current flow is being compensated for. Default: 0 */
		CIMPP::VCompIEEEType2* VcompIEEEType2;  /* The standard IEEE type 2 voltage compensator of this compensation. Default: 0 */
		CIMPP::PU rcij;  /* &lt;font color=`#0f0f0f`&gt;Resistive component of compensation of generator associated with this IEEE type 2 voltage compensator for current flow out of another generator (&lt;i&gt;Rcij&lt;/i&gt;).&lt;/font&gt; Default: nullptr */
		CIMPP::PU xcij;  /* &lt;font color=`#0f0f0f`&gt;Reactive component of compensation of generator associated with this IEEE type 2 voltage compensator for current flow out of another generator (&lt;i&gt;Xcij&lt;/i&gt;).&lt;/font&gt; Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GenICompensationForGenJ_factory();
}
#endif
