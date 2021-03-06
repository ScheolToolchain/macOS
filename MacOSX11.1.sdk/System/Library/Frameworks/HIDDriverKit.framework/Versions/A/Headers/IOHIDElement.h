/* iig(DriverKit-107.60.3) generated from IOHIDElement.iig */

/* IOHIDElement.iig:1-39 */
/*
 * Copyright (c) 2018-2019 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

#ifndef _HIDDRIVERKIT_IOHIDELEMENT_H
#define _HIDDRIVERKIT_IOHIDELEMENT_H

#include <DriverKit/OSContainer.h>  /* .iig include */
#include <HIDDriverKit/IOHIDDeviceTypes.h>
#include <DriverKit/IOTypes.h>

class OSArray;
class OSData;
class IOHIDElement;

/* source class IOHIDElement IOHIDElement.iig:40-280 */

#if __DOCUMENTATION__
#define KERNEL IIG_KERNEL

class LOCALONLY IOHIDElement : public OSContainer
{
public:
    /*!
     * @function getCookie
     *
     * @result
     * Returns the element cookie. The cookie is a unique identifier of the
     * element.
     */
    virtual IOHIDElementCookie getCookie() = 0;
    
    /*!
     * @function getParentElement
     *
     * @result
     * Returns the parent element, if any.
     */
    virtual IOHIDElement *getParentElement() = 0;
    
    /*!
     * @function getChildElements
     *
     * @result
     * Returns an array of child elements, if any.
     */
    virtual OSArray *getChildElements() = 0;
    
    /*!
     * @function getType
     *
     * @result
     * Returns the element type. Types are defined by the IOHIDElementType
     * enumerator in <IOKit/hid/IOHIDKeys.h>.
     */
    virtual IOHIDElementType getType() = 0;
    
    /*!
     * @function getCollectionType
     *
     * @result
     * Returns the element type. Types are defined by the
     * IOHIDElementCollectionType enumerator in <IOKit/hid/IOHIDKeys.h>.
     */
    virtual IOHIDElementCollectionType getCollectionType() = 0;
    
    /*!
     * @function getUsagePage
     *
     * @result
     * Returns the element's usage page. Usage pages are defined in
     * <IOKit/hid/IOHIDUsageTables.h>.
     */
    virtual uint32_t getUsagePage() = 0;
    
    /*!
     * @function getUsage
     *
     * @result
     * Returns the element's usage. Usages are defined in
     * <IOKit/hid/IOHIDUsageTables.h>.
     */
    virtual uint32_t getUsage() = 0;
    
    /*!
     * @function getLogicalMin
     *
     * @result
     * Returns the element's logical minimum.
     */
    virtual uint32_t getLogicalMin() = 0;
    
    /*!
     * @function getLogicalMax
     *
     * @result
     * Returns the element's logical maximum.
     */
    virtual uint32_t getLogicalMax() = 0;
    
    /*!
     * @function getPhysicalMin
     *
     * @result
     * Returns the element's physical minimum.
     */
    virtual uint32_t getPhysicalMin() = 0;
    
    /*!
     * @function getPhysicalMax
     *
     * @result
     * Returns the element's physical maximum.
     */
    virtual uint32_t getPhysicalMax() = 0;
    
    /*!
     * @function getUnitExponent
     *
     * @result
     * Returns the element's unit exponent. The unit exponent value is defined
     * in the USB HID spec.
     */
    virtual uint32_t getUnitExponent() = 0;
    
    /*!
     * @function getUnit
     *
     * @result
     * Returns the element's unit.  The unit value is defined in the USB HID
     * spec.
     */
    virtual uint32_t getUnit() = 0;
    
    /*!
     * @function getReportSize
     *
     * @result
     * Returns the element's report size, in bits.
     */
    virtual uint32_t getReportSize() = 0;
    
    /*!
     * @function getReportCount
     *
     * @result
     * Returns the element's report count.
     */
    virtual uint32_t getReportCount() = 0;
    
    /*!
     * @function getReportID
     *
     * @result
     * Returns the element's report ID.
     */
    virtual uint32_t getReportID() = 0;
    
    /*!
     * @function getFlags
     *
     * @result
     * Returns the element's flags. Flags are defined in the IOHIDElementFlags
     * enumerator in <IOKit/hid/IOHIDKeys.h>.
     */
    virtual uint32_t getFlags() = 0;
    
    /*!
     * @function getTimeStamp
     *
     * @result
     * Returns the element's timestamp.
     */
    virtual uint64_t getTimeStamp() = 0;
    
    /*!
     * @function setValue
     *
     * @abstract
     * Sets the value of the element. The value will not be propagated to the
     * device until the commit() function is called.
     *
     * @param value
     * The value to set.
     */
    virtual void setValue(uint32_t value) = 0;
    
    /*!
     * @function setDataValue
     *
     * @abstract
     * Sets the value of the element. The value will not be propagated to the
     * device until the commit() function is called.
     *
     * @param value
     * The value to set.
     */
    virtual void setDataValue(OSData *value) = 0;
    
    /*!
     * @function getScaledValue
     *
     * @param type
     * The scale type to use. Scale types are defined by the IOHIDValueScaleType
     * enumerator in <IOKit/hid/IOHIDKeys.h>.
     *
     * @result
     * Returns a scaled representation of the element value.
     */
    virtual uint32_t getScaledValue(IOHIDValueScaleType type) = 0;
    
    /*!
     * @function getScaledFixedValue
     *
     * @param type
     * The scale type to use. Scale types are defined by the IOHIDValueScaleType
     * enumerator in <IOKit/hid/IOHIDKeys.h>.
     *
     * @result
     * Returns a scaled, IOFixed representation of the element value.
     */
    virtual IOFixed getScaledFixedValue(IOHIDValueScaleType type) = 0;
    
    /*!
     * @function getValue
     *
     * @param options
     * Optional options to pass in. Options are defined in the IOHIDValueOptions
     * enumerator in <IOKit/hid/IOHIDKeys.h>
     *
     * @result
     * Returns the element value.
     */
    virtual uint32_t getValue(IOOptionBits options) = 0;
    
    /*!
     * @function getDataValue
     *
     * @param options
     * Optional options to pass in. Options are defined in the IOHIDValueOptions
     * enumerator in <IOKit/hid/IOHIDKeys.h>
     *
     * @result
     * Returns an OSData representation of the element value.
     */
    virtual OSData *getDataValue(IOOptionBits options) = 0;
    
    /*!
     * @function commit
     *
     * @abstract
     * Commits the element value to/from the device.
     *
     * @param direction
     * The direction to commit the element. Directions are defined in the
     * IOHIDElementCommitDirection enumerator in <IOKit/hid/IOHIDKeys.h>.
     *
     * @result
     * Returns kIOReturnSuccess on success.
     */
    virtual IOReturn commit(IOHIDElementCommitDirection direction) = 0;
};

#undef KERNEL
#else /* __DOCUMENTATION__ */

/* generated class IOHIDElement IOHIDElement.iig:40-280 */


#define IOHIDElement_Methods \
\
public:\
\
\
protected:\
    /* _Impl methods */\
\
\
public:\
    /* _Invoke methods */\
\


#define IOHIDElement_KernelMethods \
\
protected:\
    /* _Impl methods */\
\


#define IOHIDElement_VirtualMethods \
\
public:\
\


#if !KERNEL

extern OSMetaClass          * gIOHIDElementMetaClass;
extern const OSClassLoadInformation IOHIDElement_Class;

class IOHIDElementMetaClass : public OSMetaClass
{
public:
    virtual kern_return_t
    New(OSObject * instance) override;
};

#endif /* !KERNEL */

#if !KERNEL

class IOHIDElementInterface : public OSInterface
{
public:
    virtual IOHIDElementCookie
    getCookie() = 0;

    virtual IOHIDElement *
    getParentElement() = 0;

    virtual OSArray *
    getChildElements() = 0;

    virtual IOHIDElementType
    getType() = 0;

    virtual IOHIDElementCollectionType
    getCollectionType() = 0;

    virtual uint32_t
    getUsagePage() = 0;

    virtual uint32_t
    getUsage() = 0;

    virtual uint32_t
    getLogicalMin() = 0;

    virtual uint32_t
    getLogicalMax() = 0;

    virtual uint32_t
    getPhysicalMin() = 0;

    virtual uint32_t
    getPhysicalMax() = 0;

    virtual uint32_t
    getUnitExponent() = 0;

    virtual uint32_t
    getUnit() = 0;

    virtual uint32_t
    getReportSize() = 0;

    virtual uint32_t
    getReportCount() = 0;

    virtual uint32_t
    getReportID() = 0;

    virtual uint32_t
    getFlags() = 0;

    virtual uint64_t
    getTimeStamp() = 0;

    virtual void
    setValue(uint32_t value) = 0;

    virtual void
    setDataValue(OSData * value) = 0;

    virtual uint32_t
    getScaledValue(IOHIDValueScaleType type) = 0;

    virtual IOFixed
    getScaledFixedValue(IOHIDValueScaleType type) = 0;

    virtual uint32_t
    getValue(IOOptionBits options) = 0;

    virtual OSData *
    getDataValue(IOOptionBits options) = 0;

    virtual IOReturn
    commit(IOHIDElementCommitDirection direction) = 0;

};

struct IOHIDElement_IVars;
struct IOHIDElement_LocalIVars;

class IOHIDElement : public OSContainer, public IOHIDElementInterface
{
#if !KERNEL
    friend class IOHIDElementMetaClass;
#endif /* !KERNEL */

#if !KERNEL
public:
    union
    {
        IOHIDElement_IVars * ivars;
        IOHIDElement_LocalIVars * lvars;
    };
#endif /* !KERNEL */

    using super = OSContainer;

#if !KERNEL
    IOHIDElement_Methods
    IOHIDElement_VirtualMethods
#endif /* !KERNEL */

};
#endif /* !KERNEL */


#endif /* !__DOCUMENTATION__ */

/* IOHIDElement.iig:282- */

#endif /* _HIDDRIVERKIT_IOHIDELEMENT_H */
