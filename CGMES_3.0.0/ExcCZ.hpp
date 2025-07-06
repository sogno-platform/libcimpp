#ifndef ExcCZ_H
#define ExcCZ_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Czech proportion/integral exciter. */
	class ExcCZ : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcCZ();
		~ExcCZ() override;

		/** \brief Exciter output maximum limit (&lt;i&gt;Efdmax&lt;/i&gt;) (&amp;gt; ExcCZ.efdmin). Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Exciter output minimum limit (&lt;i&gt;Efdmin&lt;/i&gt;) (&amp;lt; ExcCZ.efdmax). Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief Regulator gain (&lt;i&gt;Ka&lt;/i&gt;). Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;). Default: nullptr */
		CIMPP::PU ke;

		/** \brief Regulator proportional gain (&lt;i&gt;Kp&lt;/i&gt;). Default: nullptr */
		CIMPP::PU kp;

		/** \brief Regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Regulator integral time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Voltage regulator maximum limit (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; ExcCZ.vrmin). Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Voltage regulator minimum limit (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; ExcCZ.vrmax). Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcCZ_factory();
}
#endif
