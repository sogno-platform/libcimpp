#ifndef IdentifiedObject_H
#define IdentifiedObject_H
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
#include "String.hpp"

namespace CIMPP
{
	class DiagramObject;

	/** \brief This is a root class to provide common identification for all classes needing identification and naming attributes. */
	class IdentifiedObject : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		IdentifiedObject();
		~IdentifiedObject() override;

		/** \brief The diagram objects that are associated with the domain object. Default: 0 */
		std::list<CIMPP::DiagramObject*> DiagramObjects;

		/** \brief The description is a free human readable text describing or naming the object. It may be non unique and may not correlate to a naming hierarchy. Default: '' */
		CIMPP::String description;

		/** \brief The attribute is used for an exchange of the EIC code (Energy identification Code). The length of the string is 16 characters as defined by the EIC code. For details on EIC scheme please refer to ENTSO-E web site. Default: '' */
		CIMPP::String energyIdentCodeEic;

		/** \brief Master resource identifier issued by a model authority. The mRID is unique within an exchange context. Global uniqueness is easily achieved by using a UUID, as specified in RFC 4122, for the mRID. The use of UUID is strongly recommended. For CIMXML data files in RDF syntax conforming to IEC 61970-552, the mRID is mapped to rdf:ID or rdf:about attributes that identify CIM object elements. Default: '' */
		CIMPP::String mRID;

		/** \brief The name is any free human readable and possibly non unique text naming the object. Default: '' */
		CIMPP::String name;

		/** \brief The attribute is used for an exchange of a human readable short name with length of the string 12 characters maximum. Default: '' */
		CIMPP::String shortName;

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

	BaseClass* IdentifiedObject_factory();
}
#endif
