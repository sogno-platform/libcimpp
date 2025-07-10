#ifndef SteadyStateHypothesisVersion_H
#define SteadyStateHypothesisVersion_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Date.hpp"
#include "String.hpp"

namespace CIMPP
{

	/** \brief Version details. */
	class SteadyStateHypothesisVersion : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SteadyStateHypothesisVersion();
		~SteadyStateHypothesisVersion() override;

		/** \brief Base UML provided by CIM model manager. Default: '' */
		CIMPP::String baseUML;

		/** \brief Profile URI used in the Model Exchange header and defined in IEC standards.  It uniquely identifies the Profile and its version. It is given for information only and to identify the closest IEC profile to which this CGMES profile is based on. Default: '' */
		CIMPP::String baseURI;

		/** \brief Profile creation date Form is YYYY-MM-DD for example for January 5, 2009 it is 2009-01-05. Default: '' */
		CIMPP::Date date;

		/** \brief Difference model URI defined by IEC 61970-552. Default: '' */
		CIMPP::String differenceModelURI;

		/** \brief UML provided by ENTSO-E. Default: '' */
		CIMPP::String entsoeUML;

		/** \brief Profile URI defined by ENTSO-E and used in the Model Exchange header.  It uniquely identifies the Profile and its version. The last two elements in the URI (http://entsoe.eu/CIM/SteadyStateHypothesis/yy/zzz) indicate major and minor versions where:  - yy - indicates a major version; - zzz - indicates a minor version. Default: '' */
		CIMPP::String entsoeURI;

		/** \brief Model Description URI defined by IEC 61970-552. Default: '' */
		CIMPP::String modelDescriptionURI;

		/** \brief RDF namespace. Default: '' */
		CIMPP::String namespaceRDF;

		/** \brief CIM UML namespace. Default: '' */
		CIMPP::String namespaceUML;

		/** \brief The short name of the profile used in profile documentation. Default: '' */
		CIMPP::String shortName;

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

	BaseClass* SteadyStateHypothesisVersion_factory();
}
#endif
