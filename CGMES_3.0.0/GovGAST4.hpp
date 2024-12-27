#ifndef GovGAST4_H
#define GovGAST4_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Generic turbogas.
	*/
	class GovGAST4 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST4();
		~GovGAST4() override;

		CIMPP::PU bp;  /* Droop (&lt;i&gt;b&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU ktm;  /* Compressor gain (&lt;i&gt;Ktm&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU mnef;  /* Fuel flow maximum negative error value (&lt;i&gt;MNef&lt;/i&gt;).  Typical value = -0,05. Default: nullptr */
		CIMPP::PU mxef;  /* Fuel flow maximum positive error value (&lt;i&gt;MXef&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU rymn;  /* Minimum valve opening (&lt;i&gt;RYMN&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU rymx;  /* Maximum valve opening (&lt;i&gt;RYMX&lt;/i&gt;).  Typical value = 1,1. Default: nullptr */
		CIMPP::Seconds ta;  /* Maximum gate opening velocity (&lt;i&gt;TA&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds tc;  /* Maximum gate closing velocity (&lt;i&gt;TC&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tcm;  /* Fuel control time constant (&lt;i&gt;Tcm&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tm;  /* Compressor discharge volume time constant (&lt;i&gt;Tm&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds ty;  /* Time constant of fuel valve positioner (&lt;i&gt;Ty&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */

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

	BaseClass* GovGAST4_factory();
}
#endif
