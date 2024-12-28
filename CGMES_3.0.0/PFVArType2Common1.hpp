#ifndef PFVArType2Common1_H
#define PFVArType2Common1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PFVArControllerType2Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/*
	Power factor / reactive power regulator. This model represents the power factor or reactive power controller such as the Basler SCP-250. The controller measures power factor or reactive power (PU on generator rated power) and compares it with the operator's set point. [Footnote: Basler SCP-250 is an example of a suitable product available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of this product.]
	*/
	class PFVArType2Common1 : public PFVArControllerType2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType2Common1();
		~PFVArType2Common1() override;

		CIMPP::Boolean j;  /* Selector (&lt;i&gt;J&lt;/i&gt;). true = control mode for reactive power false = control mode for power factor. Default: false */
		CIMPP::PU ki;  /* Reset gain (&lt;i&gt;Ki&lt;/i&gt;). Default: nullptr */
		CIMPP::PU kp;  /* Proportional gain (&lt;i&gt;Kp&lt;/i&gt;). Default: nullptr */
		CIMPP::PU max;  /* Output limit (&lt;i&gt;max&lt;/i&gt;). Default: nullptr */
		CIMPP::PU ref;  /* Reference value of reactive power or power factor (&lt;i&gt;Ref&lt;/i&gt;). The reference value is initialised by this model. This initialisation can override the value exchanged by this attribute to represent a plant operator`s change of the reference setting. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* PFVArType2Common1_factory();
}
#endif
