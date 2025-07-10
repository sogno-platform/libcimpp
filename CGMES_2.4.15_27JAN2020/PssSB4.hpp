#ifndef PssSB4_H
#define PssSB4_H
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

	/** \brief Power sensitive stabilizer model. */
	class PssSB4 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSB4();
		~PssSB4() override;

		/** \brief Gain (Kx). Default: nullptr */
		CIMPP::PU kx;

		/** \brief Time constant (Ta). Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Time constant (Tb). Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Time constant (Tc). Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Time constant (Td). Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Time constant (Te). Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Time constant (Tt). Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief Reset time constant (Tx1). Default: nullptr */
		CIMPP::Seconds tx1;

		/** \brief Time constant (Tx2). Default: nullptr */
		CIMPP::Seconds tx2;

		/** \brief Limiter (Vsmax). Default: nullptr */
		CIMPP::PU vsmax;

		/** \brief Limiter (Vsmin). Default: nullptr */
		CIMPP::PU vsmin;

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

	BaseClass* PssSB4_factory();
}
#endif
