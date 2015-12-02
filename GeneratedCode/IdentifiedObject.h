///////////////////////////////////////////////////////////
//  IdentifiedObject.h
//  Implementation of the Class IdentifiedObject
//  Created on:      27-Nov-2015 11:06:55
///////////////////////////////////////////////////////////

#if !defined(EA_0B448426_CFE5_49a8_B49C_69CC828A0033__INCLUDED_)
#define EA_0B448426_CFE5_49a8_B49C_69CC828A0033__INCLUDED_

#include "String.h"
#include "DiagramObject.h"

/**
 * This is a root class to provide common identification for all classes needing
 * identification and naming attributes.
 */
class IdentifiedObject
{

public:
	IdentifiedObject();
	/**
	 * The aliasName is free text human readable name of the object alternative to
	 * IdentifiedObject.name. It may be non unique and may not correlate to a naming
	 * hierarchy.
	 * The attribute aliasName is retained because of backwards compatibility between
	 * CIM relases. It is however recommended to replace aliasName with the Name class
	 * as aliasName is planned for retirement at a future time.
	 */
	String aliasName;
	/**
	 * The description is a free human readable text describing or naming the object.
	 * It may be non unique and may not correlate to a naming hierarchy.
	 */
	String description;
	/**
	 * Master resource identifier issued by a model authority. The mRID is unique
	 * within an exchange context. Global uniqueness is easily achieved by using a
	 * UUID,  as specified in RFC 4122, for the mRID. The use of UUID is strongly
	 * recommended.
	 * For CIMXML data files in RDF syntax conforming to IEC 61970-552 Edition 1, the
	 * mRID is mapped to rdf:ID or rdf:about attributes that identify CIM object
	 * elements.
	 */
	String mRID;
	/**
	 * The name is any free human readable and possibly non unique text naming the
	 * object.
	 */
	String name;
	/**
	 * The diagram objects that are associated with the domain object.
	 */
	std::vector<DiagramObject> *DiagramObjects;

};
#endif // !defined(EA_0B448426_CFE5_49a8_B49C_69CC828A0033__INCLUDED_)
