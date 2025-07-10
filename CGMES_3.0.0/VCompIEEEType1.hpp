#ifndef VCompIEEEType1_H
#define VCompIEEEType1_H
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
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief <font color="#0f0f0f">Terminal voltage transducer and load compensator as defined in IEEE 421.5-2005, 4. This model is common to all excitation system models described in the IEEE Standard. </font> <font color="#0f0f0f">Parameter details:</font> <ol> 	<li><font color="#0f0f0f">If <i>Rc</i> and <i>Xc</i> are set to zero, the l</font>oad compensation is not employed and the behaviour is as a simple sensing circuit.</li> </ol> <ol> 	<li>If all parameters (<i>Rc</i>, <i>Xc</i> and <i>Tr</i>) are set to zero, the standard model VCompIEEEType1 is bypassed.</li> </ol> Reference: IEEE 421.5-2005 4. */
	class VCompIEEEType1 : public VoltageCompensatorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		VCompIEEEType1();
		~VCompIEEEType1() override;

		/** \brief &lt;font color=`#0f0f0f`&gt;Resistive component of compensation of a generator (&lt;i&gt;Rc&lt;/i&gt;) (&amp;gt;= 0).&lt;/font&gt; Default: nullptr */
		CIMPP::PU rc;

		/** \brief &lt;font color=`#0f0f0f`&gt;Time constant which is used for the combined voltage sensing and compensation signal (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0).&lt;/font&gt; Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief &lt;font color=`#0f0f0f`&gt;Reactive component of compensation of a generator (&lt;i&gt;Xc&lt;/i&gt;) (&amp;gt;= 0).&lt;/font&gt; Default: nullptr */
		CIMPP::PU xc;

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

	BaseClass* VCompIEEEType1_factory();
}
#endif
