#ifndef PssSTAB2A_H
#define PssSTAB2A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Power system stabilizer part of an ABB excitation system. [Footnote: ABB excitation systems are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class PssSTAB2A : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSTAB2A();
		~PssSTAB2A() override;

		/** \brief Stabilizer output limiter (&lt;i&gt;H&lt;/i&gt;&lt;i&gt;&lt;sub&gt;LIM&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU hlim;

		/** \brief Gain (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 1,0. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Gain (&lt;i&gt;K3&lt;/i&gt;).  Typical value = 0,25. Default: nullptr */
		CIMPP::PU k3;

		/** \brief Gain (&lt;i&gt;K4&lt;/i&gt;).  Typical value = 0,075. Default: nullptr */
		CIMPP::PU k4;

		/** \brief Gain (&lt;i&gt;K5&lt;/i&gt;).  Typical value = 2,5. Default: nullptr */
		CIMPP::PU k5;

		/** \brief Time constant (&lt;i&gt;T2&lt;/i&gt;).  Typical value = 4,0. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant (&lt;i&gt;T3&lt;/i&gt;).  Typical value = 2,0. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Time constant (&lt;i&gt;T5&lt;/i&gt;).  Typical value = 4,5. Default: nullptr */
		CIMPP::Seconds t5;

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

	BaseClass* PssSTAB2A_factory();
}
#endif
