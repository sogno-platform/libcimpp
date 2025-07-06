#ifndef LoadComposite_H
#define LoadComposite_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "LoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief This models combines static load and induction motor load effects. The dynamics of the motor are simplified by linearizing the induction machine equations. */
	class LoadComposite : public LoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		LoadComposite();
		~LoadComposite() override;

		/** \brief Active load-frequency dependence index (dynamic) (Epfd).  Typical Value = 1.5. Default: nullptr */
		CIMPP::Simple_Float epfd;

		/** \brief Active load-frequency dependence index (static) (Epfs).  Typical Value = 1.5. Default: nullptr */
		CIMPP::Simple_Float epfs;

		/** \brief Active load-voltage dependence index (dynamic) (Epvd).  Typical Value = 0.7. Default: nullptr */
		CIMPP::Simple_Float epvd;

		/** \brief Active load-voltage dependence index (static) (Epvs).  Typical Value = 0.7. Default: nullptr */
		CIMPP::Simple_Float epvs;

		/** \brief Reactive load-frequency dependence index (dynamic) (Eqfd).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float eqfd;

		/** \brief Reactive load-frequency dependence index (static) (Eqfs).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float eqfs;

		/** \brief Reactive load-voltage dependence index (dynamic) (Eqvd).  Typical Value = 2. Default: nullptr */
		CIMPP::Simple_Float eqvd;

		/** \brief Reactive load-voltage dependence index (static) (Eqvs).  Typical Value = 2. Default: nullptr */
		CIMPP::Simple_Float eqvs;

		/** \brief Inertia constant (H).  Typical Value = 2.5. Default: nullptr */
		CIMPP::Seconds h;

		/** \brief Loading factor - ratio of initial P to motor MVA base (Lfrac).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Simple_Float lfrac;

		/** \brief Fraction of constant-power load to be represented by this motor model (Pfrac) (&gt;=0.0 and &lt;=1.0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Simple_Float pfrac;

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

	BaseClass* LoadComposite_factory();
}
#endif
