/**
 * @package     ThetaStar
 * @author      Aaron Zampaglione <azampagl@azampagl.com>
 * @copyright   Copyright (C) 2013 Aaron Zampaglione
 * @license     MIT
 */
#ifndef THETASTAR_COORDINATE_H
#define THETASTAR_COORDINATE_H

#include <climits>

#include "global.h"

namespace ThetaStar {

struct THETASTARSHARED_EXPORT Coordinate
{
   public:
      typedef short Type;

      static const Type MAX = SHRT_MAX;
      static const Type MIN = SHRT_MIN;

      Coordinate(const Type X, const Type Y) : x(X), y(Y) {}

      inline bool operator<(const Coordinate &c) const {return x < c.x && y < c.y;}

      Type x;
      Type y;
};

}

#endif // THETASTAR_COORDINATE_H
