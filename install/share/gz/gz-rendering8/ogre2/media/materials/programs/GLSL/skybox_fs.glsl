// The code in this file is adapted from OGRE Samples. The OGRE's license and
// copyright header is copied below.

/*
-----------------------------------------------------------------------------
OGRE (www.ogre3d.org) is made available under the MIT License.

Copyright (c) 2000-2013 Torus Knot Software Ltd

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/


#version ogre_glsl_ver_330

vulkan_layout( ogre_t0 ) uniform textureCube skyCubemap;
vulkan( layout( ogre_s0 ) uniform sampler texSampler );

vulkan_layout( location = 0 )
in block
{
  vec3 cameraDir;
} inPs;

vulkan_layout( location = 0 )
out vec3 fragColour;

void main()
{
  // Cubemaps are left-handed
  fragColour = texture( vkSamplerCube(skyCubemap,texSampler),
						vec3( inPs.cameraDir.xy, -inPs.cameraDir.z ) ).xyz;
}
