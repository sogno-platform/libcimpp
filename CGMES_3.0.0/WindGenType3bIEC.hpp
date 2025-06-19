#ifndef WindGenType3bIEC_H
#define WindGenType3bIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindGenType3IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;

	/** \brief IEC type 3B generator set model. Reference: IEC 61400-27-1:2015, 5.6.3.3. */
	class WindGenType3bIEC : public WindGenType3IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType3bIEC();
		~WindGenType3bIEC() override;

		/** \brief The wind dynamics lookup table associated with this generator type 3B model. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Crowbar control mode (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTcwp&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. true = 1 in the IEC model false = 0 in the IEC model. Default: false */
		CIMPP::Boolean mwtcwp;

		/** \brief Current generation time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;g&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Time constant for crowbar washout filter (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;wo&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a case-dependent parameter. Default: nullptr */
		CIMPP::Seconds two;

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

	BaseClass* WindGenType3bIEC_factory();
}
#endif
