// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <CCPACSStringVector.h>
#include <string>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    // This class is used in:
    // CPACSCurvePointListXYZ

    // generated from /xsd:schema/xsd:complexType[722]
    /// @brief Maps points (actually the index in the point list) to a curve parameter.
    /// 
    /// Which parameters are allowed depends on the context.
    /// For exampple in a wing profile, values between -1 and 1 are valid.
    /// 
    class CPACSCurveParamPointMap
    {
    public:
        TIGL_EXPORT CPACSCurveParamPointMap();
        TIGL_EXPORT virtual ~CPACSCurveParamPointMap();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const CCPACSStringVector& GetPointIndex() const;
        TIGL_EXPORT virtual CCPACSStringVector& GetPointIndex();

        TIGL_EXPORT virtual const CCPACSStringVector& GetParamOnCurve() const;
        TIGL_EXPORT virtual CCPACSStringVector& GetParamOnCurve();

    protected:
        /// List of indices of points to be mapped. Each index must be in the range 0 ... npoints-1 .
        CCPACSStringVector m_pointIndex;

        /// List of parameters on the curve, that is mapped to the points defined by their index.
        CCPACSStringVector m_paramOnCurve;

    private:
        CPACSCurveParamPointMap(const CPACSCurveParamPointMap&) = delete;
        CPACSCurveParamPointMap& operator=(const CPACSCurveParamPointMap&) = delete;

        CPACSCurveParamPointMap(CPACSCurveParamPointMap&&) = delete;
        CPACSCurveParamPointMap& operator=(CPACSCurveParamPointMap&&) = delete;
    };
} // namespace generated

// CPACSCurveParamPointMap is customized, use type CCPACSCurveParamPointMap directly
} // namespace tigl