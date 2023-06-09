/*
 * Copyright (C) 2018 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef GZ_PHYSICS_IMPLEMENTS_HH_
#define GZ_PHYSICS_IMPLEMENTS_HH_

#include <gz/physics/FeatureList.hh>
#include <gz/physics/FeaturePolicy.hh>

namespace gz
{
  namespace physics
  {
    /// \brief Physics plugins should inherit this class and pass it a
    /// FeatureList containing all the features that their plugin intends to
    /// implement.
    ///
    /// Below are simpler templates that hardcode the dimensionality and
    /// precision.
    template <typename PolicyT, typename FeatureListT>
    using Implements = detail::ExtractImplementation<PolicyT, FeatureListT>;

    template <typename FeatureListT>
    using Implements3d = Implements<FeaturePolicy3d, FeatureListT>;

    template <typename FeatureListT>
    using Implements2d = Implements<FeaturePolicy2d, FeatureListT>;

    template <typename FeatureListT>
    using Implements3f = Implements<FeaturePolicy3f, FeatureListT>;

    template <typename FeatureListT>
    using Implements2f = Implements<FeaturePolicy2f, FeatureListT>;
  }
}

#endif
