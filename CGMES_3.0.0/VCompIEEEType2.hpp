#ifndef VCompIEEEType2_H
#define VCompIEEEType2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "VoltageCompensatorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class GenICompensationForGenJ;

	/*
	<font color="#0f0f0f">Terminal voltage transducer and load compensator as defined in IEEE 421.5-2005, 4. This model is designed to cover the following types of compensation: </font> <ul> 	<li><font color="#0f0f0f">reactive droop;</font></li> 	<li><font color="#0f0f0f">transformer-drop or line-drop compensation;</font></li> 	<li><font color="#0f0f0f">reactive differential compensation known also as cross-current compensation.</font></li> </ul> <font color="#0f0f0f">Reference: IEEE 421.5-2005, 4.</font>
	*/
	class VCompIEEEType2 : public VoltageCompensatorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		VCompIEEEType2();
		~VCompIEEEType2() override;

		std::list<CIMPP::GenICompensationForGenJ*> GenICompensationForGenJ;  /* Compensation of this voltage compensator`s generator for current flow out of another generator. Default: 0 */
		CIMPP::Seconds tr;  /* &lt;font color=`#0f0f0f`&gt;Time constant which is used for the combined voltage sensing and compensation signal (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0).&lt;/font&gt; Default: nullptr */

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

	BaseClass* VCompIEEEType2_factory();
}
#endif
