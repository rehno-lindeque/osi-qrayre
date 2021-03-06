#ifndef __QRAYRE_API_H__
#define __QRAYRE_API_H__
//////////////////////////////////////////////////////////////////////////////
//
//    API.H
//
//    Author:      Rehno Lindeque
//
//    Description: QRayRE classes used to implement api
//
//    Version: 0.1 (informal prototype)
//
//    Copyright � 2006-2007, Rehno Lindeque. All rights reserved.
//
//////////////////////////////////////////////////////////////////////////////

/*                                   INCLUDES                               */
// BaseRE
#include <basere/basere.h>
#include <basere/baseredbg.h>
//#include <basere/opengl/stream.h>

// OpenGE
#include <osi/ge/intge.h>

/*                             FORWARD DECLERATIONS                         */
namespace QRayRE 
{
  class QRayScene;
  class QRayCamera;
  class QRayLight;
  class QRayRender;
}

/*                                   INCLUDES                               */
// QRayRE
#include "scene.h"
#include "camera.h"
#include "light.h"
#include "render.h"

#endif
